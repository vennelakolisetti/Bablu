#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 20

int strcompcase(char*, char*);

int main()
{
    char *str1 = NULL;
    char *str2 = NULL;
    int n;
    str1 = (char*)malloc(SIZE - sizeof(char));
    str2 = (char*)malloc(SIZE - sizeof(char));
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
    *(str1+(strlen(str1))-1) = '\0';
    *(str2+(strlen(str2))-1) = '\0';
    printf("%d\n",strcompcase(str1,str2));
    free(str1);
    free(str2);
    str1 = NULL;
    str2 = NULL;
    return 0;
}

int strcompcase(char *str1,char *str2)
{
    while(*str1 != '\0' && *str2!= '\0') {
        *str1 = tolower(*str1);
        *str2 = tolower(*str2);
        if(*str1 == *str2 && (strlen(str1) == strlen(str2))) {
            *str1++;
            *str2++;
            return 0;
        } else if(*str1 == *str2 && (strlen(str1) > strlen(str2))) {
            return 1;
        } else if(*str1 == *str2 && (strlen(str1) < strlen(str2))) {
            return -1;
        } else {
            printf("String are not equal\n");
            return 2;
            break;
        }
    }
}

