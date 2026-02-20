/* Write a program in C to reverse the words in a string.

Sample Input	Sample Output
“My name is  Andy”	“Andy  is name My”
“Abc 123 7&*&*”	“7&*&* 123 Abc”

*/

#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_LEN 200

void reverseWords(char str[]) {
    char words[MAX_WORDS][MAX_LEN];
    int wordCount = 0;
    int i = 0, j = 0;

    while (str[i] != '\0' && str[i] != '\n') {

        while (str[i] == ' ') i++;

        if (str[i] == '\0' || str[i] == '\n')
            break;


        j = 0;
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            words[wordCount][j++] = str[i++];
        }
        words[wordCount][j] = '\0';
        wordCount++;
    }


    for (i = wordCount - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i > 0) printf(" ");
    }
    printf("\n");
}

int main() {
    char str[MAX_LEN];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Reversed words: ");
    reverseWords(str);

    return 0;
}
