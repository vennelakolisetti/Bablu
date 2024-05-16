#include <stdio.h>
#define COPY (((snum << (8 - s - 1)) >> (8 - n)) << (d - n + 1)) | ((dnum << (d + 1)) >> (d + 1)) | ((dnum << (d - n + 1)) >> (d - n + 1))

void bitwise_display(unsigned int num);

int main()
{
        unsigned int snum;
        unsigned int dnum;
        unsigned int n;
        unsigned int s;
        unsigned int d;
        printf("Enter the first number: \n");
        scanf("%d", &snum);
        printf("Enter the second number: \n");
        scanf("%d", &dnum);
        printf("Enter the number of bits to be copied: \n");
        scanf("%d", &n);
        printf("Enter the position in first number: \n");
        scanf("%d", &s);
        printf("Enter the position in second number: \n");
        scanf("%d", &d);
        printf("\nOriginal first number: ");
        bitwise_display(snum);
        printf("Original second number: ");
        bitwise_display(dnum);
        printf("\nModified second number: ");
        bitwise_display(COPY);
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