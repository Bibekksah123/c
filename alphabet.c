#include<stdio.h>

int main() {
    char s; // Declare a single character variable
    printf("Enter a character: ");
    scanf(" %c", &s); // Use %c to read a single character and add a space before %c to consume leading whitespace
    
    if (s >= 'A' && s <= 'Z') {
        s = s + 32; // Convert uppercase to lowercase
    } else if (s >= 'a' && s <= 'z') {
        s = s - 32; // Convert lowercase to uppercase
    }
    
    printf("The converted character is: %c\n", s); // Use %c to print the character
    return 0;
}
