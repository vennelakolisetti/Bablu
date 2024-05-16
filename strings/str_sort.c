#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 20

//#if 1
char** sort(char** ptr);

int main()
{
        int i;
        char **ptr = ((char**) malloc (5 * sizeof(char*)));
        for (i = 0; i < 5; i++) {
                ptr[i] = ((char*) malloc (SIZE * sizeof(char)));
        }
        printf("Enter the names: \n");
        for (i = 0; i < 5; i++) {
                fgets(ptr[i], SIZE, stdin);
                *(ptr[i] + strlen(ptr[i]) - 1) = '\0';
        }
        for (i = 0; i < 5; i++) {
                ptr[i] = ((char*) realloc (ptr[i], sizeof(ptr[i])));
        }
        ptr = sort(ptr);
        printf("\nSorted names are: \n");
        for (i = 0; i < 5; i++) {
                printf(" %s ", ptr[i]);
        }
        printf("\n");
        free(ptr);
        return 0;
}

char** sort(char** ptr)
{
        int i, j;
        char *temp;
        for (i = 0; i < 4; i++) {
            for (j = i + 1; j < 5; j++) {
                if (*ptr[i] > *ptr[j]) {
                    temp = ptr[i];
                    ptr[i] = ptr[j];
                    ptr[j] = temp;
                }
            }
        }
        return ptr;
}
