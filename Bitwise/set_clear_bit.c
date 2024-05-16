#include <stdio.h>

void bitwise_display(unsigned int num);
unsigned int count_set_bits(unsigned int num);
unsigned int count_clear_bits(unsigned int num);

int main()
{
        unsigned int num;
        printf("Enter the number: \n");
        scanf("%d", &num);
        printf("\nOriginal number: ");
        bitwise_display(num);
        printf("Set bits count is %d\n", count_set_bits(num));
        printf("Clear bits count is %d\n", count_clear_bits(num));
}

unsigned int count_set_bits(unsigned int num)
{
        unsigned int count = 0;
        for (int i = 0; i < 8; i++) {
                if (num & 1) {
                        count++;
                }
                num >>= 1;
        }
        return count;
}
unsigned int count_clear_bits(unsigned int num)
{
        unsigned int count = 0;
        for (int i = 0; i < 8; i++) {
                if ((num & 1) == 0) {
                        count++;
                }
                num >>= 1;
        }
        return count;
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