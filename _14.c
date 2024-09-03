/* PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL, LETTER, SMALL 
CASE LETTER, A DIGIT OR A SPECIAL SYMBOL*/
#include <stdio.h>
int main() {
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9')
        printf("Entered character is a Digit\n");
    else if (ch >= 'A' && ch <= 'Z')
        printf("Entered character is a Capital Letter\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("Entered character is a Small Letter\n");
    else
        printf("Entered character is a Special Character\n");
    return 0;
}
