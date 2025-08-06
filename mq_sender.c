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
	mqd_t mq_create;
	int mq_ret;
	long int len;
	char buf[8192];
	int prio;
	int time;

	struct mq_attr attr;
	attr.mq_flags = 0;
	attr.mq_maxmsg = 10;
	attr.mq_msgsize = 8192;
	attr.mq_curmsgs = 0;

	struct timespec tv;
	clock_gettime(CLOCK_REALTIME, &tv);

	mq_create = mq_open("/mymq", O_CREAT | O_RDWR, 0744, &attr);
	if(mq_create == -1)
		printf("Message Q is not created .....\n");
	else
		printf("Message Q is created......\n");
	
	while(1){
	printf("Please Enter the mesaage : \n");
	scanf(" %[^\n]", buf);
	len = strlen(buf);

	printf("Please Enter the message priority:");
	scanf("%d", &prio);
	if(prio < 0 || prio > 32767)
		printf("priority is out of range\n");
	
	printf("Enter time\n");
	scanf("%d",&time);
	tv.tv_sec += time;
	

	mq_ret = mq_timedsend(mq_create, buf, len+1, prio, &tv);
	if(mq_ret == -1)
		printf("Message is not sent......\n");
	else
		printf("Mesaage is sent successfully.......\n");
	}
	mq_unlink("/mymq");

	return 0;

}



















	
