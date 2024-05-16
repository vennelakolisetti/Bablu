#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 20

int strspan(char*, char*);

int main()
{
    char *str1 = NULL;
    char *str2 = NULL;
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
    *(str1 + (strlen(str1)) - 1) = '\0';
    *(str2 + (strlen(str2)) - 1) = '\0';
    printf("Count is: %d\n", strspan(str1, str2));
    free(str1);
    free(str2);
    str1 = NULL;
    str2 = NULL;
    return 0;
}

int strspan(char *str1, char *str2)
{
    int count = 0;
    int i = 0;
    char *temp = str2;
    while (*str1) {
        while (*str2) {
            if (*str1 == *str2) {
                count++;
                break;
            }
            *str2++;
        }
        i++;
        if (count < i) {
            return count;
            break;
        }
        str2 = temp;
        *str1++;
    }
}

