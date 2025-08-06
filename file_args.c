#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
    FILE *fp;
    char str[100];
    char ch;
    fp = fopen(argv[1], argv[2]);
    if (fp ==  NULL) {
        printf("Unable to open\n");
	} else {
		printf("file opened\n");
    }
	if (argc > 3) {
		printf("Error command\n");
		exit(1);
	}
	fseek(fp, 0, 2);
	int size = ftell(fp);
    printf("The size of file is:%d\n", size);
	fclose(fp);
	return 0;
}
