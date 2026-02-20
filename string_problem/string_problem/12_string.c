/*Write a program in C to count occurrences of a word in a string.

Sample Input	Sample Output
“I liked the story about the sad giant”
“the”	2
“It is what it is”
“it”	1
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>


int countWord(char str[], char word[]) {
    int count = 0;
    int i = 0, j = 0, k = 0;

    int wordLen = 0;
    while (word[wordLen] != '\0') wordLen++;

    while (str[i] != '\0' && str[i] != '\n') {

        if (isspace(str[i])) {
            i++;
            continue;
        }


        j = i;
        k = 0;
        while (str[j] != '\0' && str[j] != '\n' && k < wordLen &&
               tolower(str[j]) == tolower(word[k])) {
            j++;
            k++;
        }


        if (k == wordLen && (str[j] == ' ' || str[j] == '\0' || ispunct(str[j]))) {
            count++;
            i = j;
        } else {

            i++;
        }
    }

    return count;
}

int main() {
    char str[200], word[50];
    int occurrences;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the word to count: ");
    scanf("%s", word);

    occurrences = countWord(str, word);

    printf("Occurrences of \"%s\": %d\n", word, occurrences);

    return 0;
}
