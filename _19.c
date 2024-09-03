#include <stdio.h>

int main() {
    char ch;
    
    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    // Check if the character is a lowercase letter using the conditional operator
    // 'a' <= ch <= 'z' checks if the character is in the range of lowercase letters
    printf("The character '%c' is %s\n", ch, (ch >= 'a' && ch <= 'z') ? "a lowercase letter" : "not a lowercase letter");
    
    return 0;
}
