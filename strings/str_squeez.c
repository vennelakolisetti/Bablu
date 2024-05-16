#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 20

char* strsqueeze(char*);

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
    printf("Squeezed string is: %s\n", strsqueeze(str));
    free(str);
    str = NULL;
    return 0;
}

char* strsqueeze(char *str)
{
    char *temp1;
    char *temp = str;
    while (*str) {
    if (*str == *(str + 1)) {
        temp1 = str;
        while (*str) {
            *str = *(str + 1);
            *str++;
        }
        str = temp1;
        } else  {
            *str++;
        }
    }
    return temp;
}

