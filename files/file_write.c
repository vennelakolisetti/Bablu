#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = NULL;
    char ch = 'a';

    // Open the file in write mode
    fp = fopen("abc.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    // Write the character to the file
    fputc(ch, fp);

    // Close the file
    fclose(fp);

    return 0;
}
