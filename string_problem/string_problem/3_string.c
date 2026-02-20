/*Write a program in C to count how many vowels are there in a string.

Sample Input	Sample Output
“My name is andy”	4
“Are you READY yet?”	7
*/

#include <stdio.h>


int countVowels(char str[]) {
    int count = 0;
    int i = 0;

    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];


        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }

        i++;
    }

    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int vowels = countVowels(str);

    printf("Number of vowels: %d\n", vowels);

    return 0;
}
