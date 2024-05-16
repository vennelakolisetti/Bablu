#include <stdio.h>
#include <math.h>
#define INVERT ((n1 << (p - n + 1)) ^ snum)

void bitwise_display(unsigned char num);
int main()
{
        unsigned char snum;
        int p;
        int n;
        int n1 = 1;
        printf("Enter the number: \n");
        scanf("%hhd", &snum);
        printf("Enter the number of bits: \n");
        scanf("%d", &n);
        for(int i = 0; i < n; i++) {
                n1 = 2 * n1;
        }
        n1  = n1 - 1;
        printf("Enter the position: \n");
        scanf("%d", &p);
        bitwise_display(snum);
        bitwise_display(INVERT);
}

void bitwise_display(unsigned char num)
{
        int i;
        for (i = 0; i < 8; i++) {
                if (num & 128) {
                        printf("1 ");
                } else {
                        printf("0 ");
                }
                num <<= 1;
        }
        printf("\n");
}
