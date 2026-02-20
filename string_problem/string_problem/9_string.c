/*Write a program in C to count the occurrences of a character in a string regardless of its case.

Sample Input	Sample Output
“My name is Andy”
‘a’	2
“WELCOME to CSE, everyone”
‘E’	6
*/
#include <stdio.h>
#include <ctype.h>


int countCharIgnoreCase(char str[], char ch) {
    int count = 0;
    int i = 0;

    ch = tolower(ch);

    while (str[i] != '\0' && str[i] != '\n') {
        if (tolower(str[i]) == ch) {
            count++;
        }
        i++;
    }

    return count;
}

int main() {
    char str[200], ch;
    int count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to count: ");
    scanf(" %c", &ch);

    count = countCharIgnoreCase(str, ch);

    printf("Occurrences of '%c': %d\n", ch, count);

    return 0;
}
