#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\\0') {
        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Subtract 32 from its ASCII value to convert to uppercase
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("Uppercase string: %s", str);

    return 0;
}