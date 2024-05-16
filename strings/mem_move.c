#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
 
void* my_memmove(void*, void*, int );
 
int main ()
{
        int a = 18;
    char *b;
        my_memmove(b, &a, 13);
        printf("%d", *b);
}
 
void* my_memmove(void* dest, void* src, int num )
{
        int num1 = num;
        char *temp1 =(char* ) dest;
        char *temp2 =(char* ) src;
 
        char *arrtemp = (char *) calloc(num , sizeof(char));
        char *arr = arrtemp;
        while(num1) {
                *arr = *temp2;
                arr++;
                temp2++;
                num1--;
        }
        arr = arrtemp;
        while(num) {
                *temp1 = *arr;
                arr++;
                temp1++;
                num--;
        }
        free(arrtemp);
        arrtemp = NULL;
        arr = NULL;
        temp1 = NULL;
        temp2 = NULL;
        return dest;
}

