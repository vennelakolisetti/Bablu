#include<stdio.h>
int fun()
{
    printf("IndiaBix.com\n");
    return 0;
}
int main()
{
    int (*p)() = fun;
    (*p)();
    return 0;
}
