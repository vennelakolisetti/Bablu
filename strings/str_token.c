#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

char* mystrtok(char *str, char *delim);

int main()
{
        char *str = NULL;
        char *delim = NULL;
        str = (char*) malloc (SIZE * sizeof(char));
        if (NULL == str) {
                printf("Malloc failed\n");
                exit(1);
        }
        printf("Enter the string: \n");
        if (NULL == fgets(str, SIZE, stdin)) {
                printf("Error in fgets\n");
        }
        delim = (char*) malloc (SIZE * sizeof(char));
        if (NULL == delim) {
                printf("Malloc failed\n");
                exit(1);
        }
        printf("Enter the delimeter: \n");
        if (NULL == fgets(delim, SIZE, stdin)) {
                printf("Error in fgets\n");
        }
        printf("%s\n", mystrtok(str, delim));
        printf("%s\n", mystrtok(NULL, delim));
        printf("%s\n", mystrtok(NULL, delim));
        printf("%s\n", mystrtok(NULL, delim));
}

char* mystrtok(char *str, char *delim)
{
    static char *index;
    if(str != NULL) {
        index = str;
    } else {
        str = index;
    }
    if(*index == '\0') {
        return NULL;
    }
    while(*index != '\0') {
        for(int i = 0; delim[i] != '\0'; i++) {
            if(*index == delim[i]) {
                if(index == str) {
                    index++;
                    str++;
                } else {
                    *index = '\0';
                    break;
                }
            }
        }
        if (*index == '\0') {
            index-0000000000000000000000/ex;
    }
    return str;
}


