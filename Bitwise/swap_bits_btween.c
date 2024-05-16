#include <stdio.h>

void bitwise_display(unsigned int num);
int swap_bits_between(unsigned int snum, unsigned int dnum, unsigned int s, unsigned int d);

int main()
{
        unsigned int snum;
        unsigned int dnum;
        unsigned int s;
        unsigned int d;
        printf("Enter the first number: \n");
        scanf("%d", &snum);
        printf("Enter the second number: \n");
        scanf("%d", &dnum);
        printf("Enter the position to be interchanged in first number: ");
        scanf("%d", &s);
        printf("Enter the position to be interchanged in second number: ");
        scanf("%d", &d);
        printf("\nOriginal numbers: ");
        bitwise_display(snum);
        bitwise_display(dnum);
        if (swap_bits_between(snum, dnum, s, d) == 0) {
                printf("\nSuccessful\n");
        } else {
                printf("Bits are same\n");
        }
}

int swap_bits_between(unsigned int snum, unsigned int dnum, unsigned int s, unsigned int d)
{
        if (((snum >> s) & 1) != ((dnum >> d) & 1)) {
                snum = ((1 << s) ^ snum);
                dnum = ((1 << d) ^ dnum);
                printf("\nModified numbers: ");
                bitwise_display(snum);
                bitwise_display(dnum);
                return 0;
        } else {
                return -1;
        }
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

