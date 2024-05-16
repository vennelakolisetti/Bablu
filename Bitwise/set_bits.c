#include <stdio.h>
#define SET (((snum << (32 - n)) >> (32 - p - 1)) |  ((dnum >> (p + 1)) << (p + 1)) | ((dnum << (32 - n - 1)) >> (32 - n - 1)))

void bitwise_display(unsigned int num);

int main()
{
        unsigned int snum;
        unsigned int dnum;
        unsigned int n;
        unsigned int p;
        printf("Enter the first number: \n");
        scanf("%d", &snum);
        printf("Enter the second number: \n");
        scanf("%d", &dnum);
        printf("Enter the number of bits to be copied: \n");
        scanf("%d", &n);
        printf("Enter the position in second number: \n");
        scanf("%d", &p);
        printf("\nOriginal first number: ");
        bitwise_display(snum);
        printf("Original second number: ");
        bitwise_display(dnum);
        printf("\nModified second number: ");
        bitwise_display(SET);
}

void bitwise_display(unsigned int num)
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
