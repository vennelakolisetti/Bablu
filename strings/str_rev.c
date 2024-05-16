#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 20

char* strrev(char*);

int main()
{
    char *str = NULL;
    str = (char*) malloc (SIZE - sizeof(char));
    printf("Enter the string: ");
    if(NULL == str) {
        printf("Malloc failed!!");
        exit(0);
    }
    if(NULL == (fgets(str, SIZE, stdin))) {
        printf("ERROR!!!");
    }
    *(str + (strlen(str)) - 1) = '\0';
    printf("Reverese of string is %s\n", strrev(str));
    free(str);
    str = NULL;
    return 0;
}

char* strrev(char *str)
{
    char *temp1 = str;
    char temp;
    char *len = (str + (strlen(str) - 1));
    while (len > str) {
        temp = *str;
        *str = *len;
        *len = temp;
        str++;
        len--;
    }
    return temp1;
}

