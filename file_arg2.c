#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int search(FILE*, char*);
int main(int argc, char* argv[])
//int search(FILE *, char *);
{

	char ch;
	int size;
	FILE *fp;
	fp = fopen(argv[1], argv[2]);
	if (fp == NULL) {
		printf("Error open file\n");
	} else {
		printf("file opened\n");
	}
	if (argc > 3) {
		printf("command error\n");
		exit(1);
	}
	search(fp, argv[2]);
	fclose(fp);
}
int search(FILE *fp, char *buff)
{
	FILE *fp1;
	fp1 = fopen("fp1", "w");
	char str[20];
	char ch;
	int i = 0;
	int len  = strlen(buff);
	int seek = fseek(fp, 0, 0);
	ch = fgetc(fp);
	while(ch != EOF) {
		if (ch == ' ' || ch == '\n') {
			str[i] = '\0';
			if (strcmp(str, buff) == 0) {
				while (ch = fgetc(fp) != '\n') {
					fseek(fp1, -2L, 1);
					int res = ftell(fp);
				}
				while ((ch = fgetc(fp) != '\n')) {
						fputc(ch, fp);
				}
			}
		} else {
			str[i] = ch;
			i++;
		}
		ch = fgetc(fp);
	}
	return 1;
}



