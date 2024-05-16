#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 20

int strcomp(char*, char*);

int main()
{
    char *str1 = NULL;
    char *str2 = NULL;
    str1 = (char*) malloc (SIZE - sizeof(char));
    str2 = (char*) malloc (SIZE - sizeof(char));
        if (NULL == str1 && NULL == str2) {
            printf("Malloc failed!!\n");
            exit(0);
        }

    printf("Enter the first string: ");
    if(NULL == (fgets(str1, SIZE, stdin))) {
        printf("ERROR!!!");
    }
    printf("Enter the second string: ");
    if(NULL == (fgets(str2, SIZE, stdin))) {
        printf("ERROR!!!");
    }
    *(str1 + (strlen(str1)) - 1) = '\0';
    *(str2 + (strlen(str2)) - 1) = '\0';
    printf("%d\n", strcomp(str1, str2));
        free(str1);
        free(str2);
        str1 = NULL;
        str2 = NULL;
        return 0;
}

int strcomp(char *str1,char *str2)
{
    while(*str1 != '\0' && *str2!= '\0') {
        if(*str1 == *str2 && (strlen(str1) == strlen(str2))) {
           // *str1++;
            //*str2++;
            return 0;
        } else if(*str1 == *str2 && (strlen(str1) > strlen(str2))) {
            return 1;
        } else if(*str1 == *str2 && (strlen(str1) < strlen(str2))) {
            return -1;
        } else {
            printf("Strings are not equal\n");
            return 2;
        }
        *str1++;
        *str2++;
    }
}

