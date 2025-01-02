#include <stdio.h>
#include <string.h>

int main() {
    char keyword[100], reversed[100];
    int length, i;

    // Input the keyword
    printf("Enter a keyword: ");
    fgets(keyword, sizeof(keyword), stdin);

    // Remove the newline character at the end if it exists
    keyword[strcspn(keyword, "\n")] = '\0';

    // Find the length of the keyword
    length = strlen(keyword);

    // Reverse the keyword
    for (i = 0; i < length; i++) {
        reversed[i] = keyword[length - i - 1];
    }
    reversed[length] = '\0'; // Null terminate the reversed string

    // Print the reversed keyword
    printf("Reversed keyword: %s\n", reversed);

    return 0;
}
