#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<mqueue.h>
#include<time.h>

int main()
{
	mqd_t mq_rec_open;
	size_t ret_rec;
	char buf[8192];
	int prio;
	int time;
	
	struct timespec tv;
	clock_gettime(CLOCK_REALTIME, &tv);

	mq_rec_open = mq_open("/mymq", O_RDWR);
	if(mq_rec_open == -1)
		printf("Message Q is not opened .....\n");
	else
		printf("Message Q is opened......\n");


	while(1){
	printf("Enter the time\n");
	scanf("%d",&time);

	ret_rec = mq_timedreceive(mq_rec_open, buf, sizeof(buf), &prio, &tv);
	printf("prio: %d Message: %s\n", prio, buf);
	}
	
	mq_unlink("/mymq");

	return 0;


}



















	

