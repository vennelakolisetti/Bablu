#include <stdio.h>
#define MAX for (i = 7; i >= 0; i--) { \
                                if ((num1 & (1 << i)) && (!(num2 & (1 << i)))) { \
                                        printf("Num1 is greater\n"); \
                                        break;\
                                } else if (!(num1 & (1 << i)) && ((num2 & (1 << i)))) { \
                                        printf("Num2 is greater\n"); \
                                        break;\
                                } \
                        } \
                        if (i < 0) { \
                                printf("Numbers are equal\n"); \
                        }

void bitwise_display(unsigned char num);

int main()
{
        unsigned char num1;
        unsigned char num2;
        int p;
        int n;
        int i;
        printf("Enter the number1: \n");
        scanf("%hhd", &num1);
        printf("Enter the number2: \n");
        scanf("%hhd", &num2);
        printf("Num1: \n");
        bitwise_display(num1);
        printf("Num2: \n");
        bitwise_display(num2);
        MAX
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
