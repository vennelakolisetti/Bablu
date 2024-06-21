#include <stdio.h>
int main()
{
    float a = 0.7;
    if(0.7 > a) {
        printf("Greater\n");
    } else {
        printf("Not greater\n");
    }
    printf("%f\n%f", a, 0.7);
    return 0;
}