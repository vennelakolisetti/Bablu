#include <stdio.h>

void bitwise_display(unsigned int num);
unsigned int count_leading_set_bits(unsigned int num);
unsigned int count_leading_clear_bits(unsigned int num);
unsigned int count_trailing_set_bits(unsigned int num);
unsigned int count_trailing_clear_bits(unsigned int num);

int main()
{
        unsigned int num;
        printf("Enter the number: \n");
        scanf("%d", &num);
        printf("\nOriginal number: ");
        bitwise_display(num);
        printf("Leading set bits count is %d\n", count_leading_set_bits(num));
        printf("Leading clear bits count is %d\n", count_leading_clear_bits(num));
        printf("Trailing set bits count is %d\n", count_trailing_set_bits(num));
        printf("Trailing clear bits count is %d\n", count_trailing_clear_bits(num));
}

unsigned int count_leading_set_bits(unsigned int num)
{
        unsigned int count = 0;
        for (int i = 0; i < 8; i++) {
                if (num & 128) {
                        count++;
                } else {
                        return count;
                }
                num <<= 1;
        }
        return count;
}

unsigned int count_leading_clear_bits(unsigned int num)
{
        unsigned int count = 0;
        for (int i = 0; i < 8; i++) {
                if ((num & 128) == 0) {
                        count++;
                } else {
                        return count;
                }
                num <<= 1;
        }
        return count;
}

unsigned int count_trailing_set_bits(unsigned int num)
{
        unsigned int count = 0;
        for (int i = 0; i < 8; i++) {
                if (num & 1) {
                        count++;
                } else {
                        return count;
                }
                num >>= 1;
        }
        return count;
}
unsigned int count_trailing_clear_bits(unsigned int num)
{
        unsigned int count = 0;
        for (int i = 0; i < 8; i++) {
                if ((num & 1) == 0) {
                        count++;
                } else {
                        return count;
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