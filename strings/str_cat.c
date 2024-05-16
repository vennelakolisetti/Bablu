#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 20

char* mystrcat(char *src1, char *src2);

int main()
{
        char *src1;
        char *src2;
        src1 = (char *) malloc (SIZE * sizeof(char));
        src2 = (char *) malloc (SIZE * sizeof(char));
        if (NULL == src1 && NULL == src2) {
                printf("malloc failed!!\n");
                exit(0);
        }
        printf("Enter the first String: \n");
        if (NULL == (fgets(src1, SIZE, stdin))) {
                printf("Fgets failed for src1");
        }
        printf("Enter the second String: \n");
        if (NULL == (fgets(src2, SIZE, stdin))) {
                printf("Fgets failed for src2");
        }
        *(src1 + (strlen(src1)) - 1) = '\0';
        *(src2 + (strlen(src2)) - 1) = '\0';
        printf("Concatinated String is %s\n", mystrcat(src1, src2));
        free(src1);
        free(src2);
        src1 = NULL;
        src2 = NULL;
}

char* mystrcat(char *src1, char *src2)
{
        char *temp = src1;
        while (*src1) {
                src1++;
        }
        while (*src2) {
                *src1++ = *src2++;
        }
        *src1 = '\0';
        return temp;
}

