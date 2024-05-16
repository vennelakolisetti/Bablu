#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 20

char *strappend(char*, char*);

int main()
{
    char *src = NULL;
    char *dest = NULL;
    src = (char*)malloc(SIZE - sizeof(char));
    dest = (char*)malloc(SIZE - sizeof(char));
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
    strappend(src, dest);
    printf("string is :%s\n",src);
        free(src);
        free(dest);
        src = NULL;
        dest = NULL;
}

char *strappend(char *src,char *dest)
{
    while(*src != '\0') {
        src++;
    }
    while(*dest != '\0') {
        *src = *dest ;
        *src++;
        *dest++;
    }
    *src == '\0';
    return src;
}
