#include <stdio.h>
#include <stdlib.h>

int main() {
    int fno, sno; //*ptr1 = &fno, *ptr2 = &sno;

    int *p1, *p2;
    printf("\n\n Pointer : Find the maximum number between two numbers :\n");
    printf("------------------------------------------------------------\n");

    printf(" Input the first number : ");
    scanf("%d", &fno); // Read the first number from the user and store it using ptr1
    printf(" Input the second number : ");
    scanf("%d", &sno); // Read the second number from the user and store it using ptr2
    p1 = &fno;
    p2 = &sno;
    // Compare the values pointed by ptr1 and ptr2 to find the maximum number
    if (*p1 > *p2) {
        printf("\n\n %d is the maximum number.\n\n", *p1); // Print the maximum number
    } else {
        printf("\n\n %d is the maximum number.\n\n", *p2); // Print the maximum number
    }
	return 0;
}

