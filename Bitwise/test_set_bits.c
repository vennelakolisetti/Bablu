#include <stdio.h>
#define TESTSET ((1 << p) & num) ? (num) : ((1 << p) | num)

void bitwise_display(unsigned int num);

int main()
{
        unsigned int num;
        unsigned int p;
        printf("Enter the number: \n");
        scanf("%d", &num);
        printf("Enter the position to set: ");
        scanf("%d", &p);
        printf("\nOriginal number: ");
        bitwise_display(num);
        printf("Modified number: ");
        bitwise_display(TESTSET);
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
