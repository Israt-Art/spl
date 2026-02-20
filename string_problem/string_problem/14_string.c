/*Write a program in C to find the maximum occurring character in a string.

Sample Input	Sample Output
“Welcome to CSE”	E (or e)
“mmmttssarrrddd”	D (or d)
“mmmttssarrrDDd”	D (or d)
*/

#include <stdio.h>
#include <ctype.h>


char maxOccurringChar(char str[]) {
    int freq[256] = {0};
    int i = 0;
    char maxChar = '\0';
    int maxCount = 0;


    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        if (isalpha(ch)) {
            ch = toupper(ch);
        }
        freq[(int)ch]++;
        i++;
    }


    for (i = 0; i < 256; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxChar = (char)i;
        }
    }

    return maxChar;
}

int main() {
    char str[200];
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    maxChar = maxOccurringChar(str);

    printf("Maximum occurring character: %c\n", maxChar);

    return 0;
}
