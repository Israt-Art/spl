/*Write a program in C to concatenate two strings without using any library function.

Sample Input	Sample Output
“My name ”
“is andy”	“My name is andy”
*/

#include <stdio.h>


void concatenateWithSpace(char str1[], char str2[]) {
    int i = 0, j = 0;


    while (str1[i] != '\0' && str1[i] != '\n') {
        i++;
    }


    if (i > 0 && str1[i-1] != ' ') {
        str1[i] = ' ';
        i++;
    }


    while (str2[j] != '\0' && str2[j] != '\n') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    concatenateWithSpace(str1, str2);

    printf("Concatenated string: \"%s\"\n", str1);

    return 0;
}
