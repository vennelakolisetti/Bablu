#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 50

char *strinschr(char*, const char, int);

int main()
{
    char *str = NULL;
    char c;
    int pos;
    str = (char*) malloc (SIZE - sizeof(char));
        if (NULL == str) {
            printf("Malloc failed!!\n");
            exit(0);
        }
        printf("Enter the first string: ");
        if(NULL == (fgets(str, SIZE, stdin))) {
            printf("ERROR!!!");
         }
         *(str + (strlen(str)) - 1) = '\0';
        printf("Enter the character to be inserted in string:");
        scanf("%c", &c);
        printf("Enter the position of character in string:");
        scanf("%d", &pos);
        printf("String is %s\n",strinschr(str, c, pos));
        free(str);
        str = NULL;
        return 0;
}

char *strinschr(char *str, const char c, int pos)
{
    char *temp = str;
    int i = strlen(str);
    while (*str++) {
    }
    while (i > 0) {
        *str = *(str - 1);
        if (i == pos) {
            *(str - 1) = c;
            break;
        }
        str--;
        i--;
    }
    return temp;
}

