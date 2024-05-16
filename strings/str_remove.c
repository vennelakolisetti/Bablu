#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 100
 
char *mystrrem(char*, char*);
char *mystrcpy(char* , char*);
 
int main ()
{
        char *str1 = NULL;
        str1 = (char*) malloc(SIZE * sizeof(char));
 
        char *str2 = NULL;
        str2 = (char*) malloc(SIZE * sizeof(char));
        if(NULL == str1  || NULL == str2) {
                printf("error memory is not allocated-\n");
                exit(0);
        }
        printf("Enter the string in str1-\n");
        fgets(str1, SIZE, stdin);
        *(str1 + (strlen(str1) - 1)) = '\0';
        if(NULL == str1) {
                printf("error fgets is NULL-\n");
        }
 
        printf("Enter the string to remove form above string-\n");
        fgets(str2, SIZE, stdin);
        *(str2 + (strlen(str2) - 1)) = '\0';
        if(NULL == str1) {
                printf("error fgets is NULL-\n");
        }
 
        printf("string - %s\n", mystrrem(str1, str2));
        free(str1);
        free(str2);
        str1 = NULL;
        str2 = NULL;
        return 0;
 
}
 
char *mystrrem(char* str, char* substr)
{
    int result;
    int count = 0;
    int j = 0; //
    char* strtemp1 = str;
    while(*strtemp1 != '\0') {
        if(*strtemp1 == *substr) {
        //      substr1 = substr;
            while(*substr != '\0') {
                if(*strtemp1 == *substr) {
                    strtemp1++;
                    substr++;
                    j = 1;
                    result = 1;
                } else {
                    j = 1;
                    result = 0;
                    break;
                }
            }
        } else if(j == 1) {
            break;
        }  else {
            result = 0;
            strtemp1++;
            count++;
        }
    }
    if(result) {
        char* cpypos = str + count;
        mystrcpy(cpypos,strtemp1);
    }
    return str;
}
 
char *mystrcpy(char* dest, char* sour)
{
    char *temp = NULL;
    temp = dest;
    while(*temp++ = *sour++);
    return dest;
}

