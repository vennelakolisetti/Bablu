#include <stdio.h>
void display(unsigned char num);
int swap_bits(unsigned char num);
int main()
{
    unsigned char num;
    printf("Enter a num\n");
    scanf("%hhd", &num);
    printf("\nBit representation\n");
    display(num);
    num = swap_bits(num);
    printf("%d", num);
    printf("\nAfter Swap bit representation\n");
    display(num);
    return 0;
}
int swap_bits(unsigned char num)
{
    int pos1;
    int pos2;
    printf("\nEnter pos1\n");
    scanf("%d", &pos1);
    printf("\nEnter pos2\n");
    scanf("%d", &pos2);
    if(((num >> pos1)&1) == ((num >> pos2)&1)) {
        return num;
    } else {
        num = ((1 << pos1) ^ num);
        num = ((1 << pos2) ^ num);
    }
    return num;
}
void display(unsigned char num)
{
    for(int i = 7; i >= 0; i--) {
        if((1<<i)&num) {
            printf("1");
        } else {
            printf("0");
        }
    }
}