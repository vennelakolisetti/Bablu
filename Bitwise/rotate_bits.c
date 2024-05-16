#include <stdio.h>
#define LEFT ((num << n) | (num >> (8 - n)))
#define RIGHT ((num >> n) | (num << (8 - n)))

void bitwise_display(unsigned int num);

int main()
{
        unsigned int num;
        unsigned int num1;
        unsigned int n;
        printf("Enter the number: \n");
        scanf("%d", &num);
        printf("Enter the number of positions to rotate: ");
        scanf("%d", &n);
        printf("\nOriginal number: ");
        bitwise_display(num);
        printf("Left rotate: ");
        bitwise_display(LEFT);
        printf("Right rotate: ");
        bitwise_display(RIGHT);

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
