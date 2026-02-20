/*Write a program in C to count the number of words in a string.

Sample Input	Sample Output
“My name is andy”	4
“Abc 123 7&*&*”	3
*/

#include <stdio.h>


int countWords(char str[]) {
    int count = 0;
    int i = 0;
    int inWord = 0;

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] != ' ' && str[i] != '\t') {
            if (inWord == 0) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
        i++;
    }

    return count;
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int words = countWords(str);

    printf("Number of words: %d\n", words);

    return 0;
}
