#include<stdio.h>
struct emp
{
    char name[20];
    int age;
};
int main()
{
    struct emp xx;
    int a;
    printf("%d\n%d\n", &a, a);
    return 0;
}