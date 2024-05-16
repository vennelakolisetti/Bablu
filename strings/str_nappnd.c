//String nappend
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 20
char *strnappend(char*, char*,int);
int main()
{
    char *src = NULL;
    char *dest = NULL;
    int n;
    src = (char*) malloc (SIZE - sizeof(char));
    dest = (char*) malloc (SIZE - sizeof(char));
     if (NULL == src && NULL == dest) {
                printf("Malloc failed!!\n");
                exit(0);
        }
    printf("Enter the first string: ");
    if(NULL == (fgets(src, SIZE, stdin))) {
        printf("ERROR!!!");
    }
    printf("Enter the second string: ");
    if(NULL == (fgets(dest, SIZE, stdin))) {
        printf("ERROR!!!");
    }
    *(src + (strlen(src)) - 1) = '\0';
    *(dest + (strlen(dest)) - 1) = '\0';
    printf("Enter the size :");
    scanf("%d",&n);
    strnappend(src, dest,n);
    printf("string is :%s\n",src);
    free(src);
    free(dest);
    src = NULL;
    dest = NULL;
    return 0;
}

char *strnappend(char *src,char *dest, int n)
{
    int i = 1;
    while(*src != '\0') {
        src++;
    }
    while(i <= n) {
        *src = *dest ;
        src++;
        dest++;
        i++;
    }
    *src == '\0';
    return src;
}

