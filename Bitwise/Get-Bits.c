#include <stdio.h>
#define GET ((snum << (32 - (p + n))) >> (32 - n))

void bitwise_display(unsigned char num);

int main()
{
        unsigned int snum;
        int p;
        int n;
        printf("Enter the number: \n");
        scanf("%i", &snum);
        printf("Enter the number of bits: \n");
        scanf("%d", &n);
        printf("Enter the position: \n");
        scanf("%d", &p);
        bitwise_display(snum);
        bitwise_display(GET);
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
