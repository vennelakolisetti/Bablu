#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 20

char *strncopy(char*, char*, int);

int main()
{
    int n;
    char *src = NULL;
    char *dest = NULL;
    src = (char*)malloc(SIZE - sizeof(char));
        dest = (char*)malloc(SIZE - sizeof(char));
        if (NULL == src && NULL == dest) {
            printf("Malloc failed!!\n");
            exit(0);
        }
    printf("Enter the string: ");
    if(NULL == (fgets(src, SIZE, stdin))) {
        printf("ERROR!!!");
    }
    printf("Enter size of the string to be copied :");
    scanf("%d", &n);
    *(src+(strlen(src))-1) = '\0';
    strncopy(dest, src, n);
    printf("string is %s\n", dest);
    free(src);
    free(dest);
    src = NULL;
    dest = NULL;
    return 0;
}

char *strncopy(char *dest,char *src,int n)
{
    int i = 1;
    while(i <= n) {
        *dest = *src;
        dest++;
        src++;
        i++;
    }
    *dest = '\0';
    return dest;
}

