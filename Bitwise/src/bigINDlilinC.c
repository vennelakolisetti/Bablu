#include <stdio.h>

int main() {
    unsigned int num = 1;
    char *ptr = (char*)&num;

    if (*ptr) {
        printf("Little Endian\n");
    } else {
        printf("Big Endian\n");
    }

    return 0;
}

