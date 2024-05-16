#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 20

int strindex(char*, char);

int main()
{
    char *str = NULL;
    char ch;
    str = (char*)malloc(SIZE - sizeof(char));
    if (NULL == str) {
        printf("Malloc failed!!\n");
        exit(0);
    }
    printf("Enter the first string: ");
    if(NULL == (fgets(str, SIZE, stdin))) {
    printf("ERROR!!!");
    }
    *(str+(strlen(str))-1) = '\0';
    printf("Enter the character to search: ");
    scanf("%c", &ch);
    printf("Index: %d\n", strindex(str, ch));
    free(str);
    str = NULL;
    return 0;
}

int strindex(char *str, char ch)
{
    int index = 0;
    while (*str) {
      if (*str == ch) {
          return index;
          break;
      }
      index++;
      str++;
    } 
    printf("Character not found.\n");
}

