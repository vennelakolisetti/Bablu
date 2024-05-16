#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 20

char *strcopy(char*, char*);

int main()
{
    char *src = NULL;
    char *dest = NULL;
    src = (char*)malloc(SIZE * sizeof(char));
    dest = (char*)malloc(SIZE * sizeof(char));
     if (NULL == src && NULL == dest) {
                printf("Malloc failed!!\n");
                exit(0);
        }
    printf("Enter the string: ");
    if(NULL == (fgets(src, SIZE, stdin))) {
        printf("ERROR!!!");
    }
    *(src + (strlen(src)) - 1) = '\0';
    printf("string is %s\n", strcopy(dest, src));
        free(src);
        free(dest);
        src = NULL;
        dest = NULL;
        return 0;
}

char *strcopy(char *dest,char *src)
{
    char *temp = dest;
    while(*src) {
        *dest = *src;
        *dest++;
        *src++;
    }
    *dest = '\0';
    return temp;
}

