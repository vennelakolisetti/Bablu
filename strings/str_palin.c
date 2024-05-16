#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 20

int strpalin(char*);

int main()
{
    char *str = NULL;
    str = (char*) malloc (SIZE - sizeof(char));
        if(NULL == str) {
        printf("Malloc failed!!");
        exit(0);
    }
    printf("Enter the string: ");
    if(NULL == (fgets(str, SIZE, stdin))) {
        printf("fgets failed for str!!");
    }
    *(str + (strlen(str)) - 1) = '\0';
    if (strpalin(str)) {
        printf("String is Palindrome\n");
    } else {
        printf("String is not a Palindrome\n");
    }
    free(str);
    str = NULL;
    return 0;
}

int strpalin(char *str)
{
    char *len = str + strlen(str) - 1;
    while (len > str) {
        if (*str != *len) {
            return 0;
            break;
        }
        *str++;
        *len--;
    }
    return 1;
}

