#include<stdio.h>
struct bits {
    short int a;
    int b : 10;
    char c;
    short d : 10;
    short e : 12;
 };
struct bits1 {
    int a : 17;
    short b : 12;
    int c : 7;
    char d : 4;
    short e : 12;
    char g : 4;
    int h : 12 ;
    char f;
 };
int main()
{
    struct bits b;
    struct bits1 b1;
    printf("size of struct is %ld\n",sizeof(b));
    printf("size of struct is %ld\n",sizeof(b1));
    return 0;
}