#include <stdio.h>

int main() {
    FILE *fp;
    char c;

    // Open the file in read mode
    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read and print each character until the end of file
    while ((c = getc(fp)) != EOF) {
        putchar(c);
    }

    // Close the file
    fclose(fp);
    return 0;
}
