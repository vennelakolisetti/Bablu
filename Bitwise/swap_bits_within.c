#include <stdio.h>

void bitwise_display(unsigned int num);
unsigned int swap_bits_within(unsigned int num, unsigned int s, unsigned int d);

int main()
{
        unsigned int num;
        unsigned int s;
        unsigned int d;
        printf("Enter the number: \n");
        scanf("%d", &num);
        printf("Enter the 2 positions to be interchanged: ");
        scanf("%d %d", &s, &d);
        bitwise_display(num);
        num = swap_bits_within(num, s, d);
        bitwise_display(num);
}

unsigned int swap_bits_within(unsigned int num, unsigned int s, unsigned int d)
{
        if (((num >> s) & 1) != ((num >> d) & 1)) {
                num = (((1 << s) | (1 << d)) ^ num);
        }
        return num;
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
