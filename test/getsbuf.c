#include <stdio.h>
#include <string.h>
int main() {
    char buffer[15];
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        // Remove newline character if it was read
        buffer[strcspn(buffer, "\n")] = '\0';
        printf("You entered: %s\n", buffer);
    } else {
        // Handle error
        printf("Error reading input.\n");
    }
    return 0;
}

