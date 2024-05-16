#include <stdio.h>
#define EVEN (num ^ (1 | (1 << 2) | (1 << 4) | (1 << 6)))
#define ODD (num ^ ((1 << 1) | (1 << 3) | (1 << 5) | (1 << 7)))

void bitwise_display(unsigned int num);

int main()
{
        unsigned int num;
        printf("Enter the number: \n");
        scanf("%d", &num);
        printf(" Original number: ");
        bitwise_display(num);
        printf("Toggle even bits: ");
        bitwise_display(EVEN);
        printf(" Toggle odd bits: ");
        bitwise_display(ODD);
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

