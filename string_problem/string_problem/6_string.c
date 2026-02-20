/*Write a program in C to convert lowercase string to uppercase.

Sample Input	Sample Output
“My name is andy”	“MY NAME IS ANDY”
“& I am 20 years old”	“& I AM 20 YEARS OLD”
*/

#include <stdio.h>


void toUpperCase(char str[]) {
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {

        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    toUpperCase(str);

    printf("Uppercase string: \"%s\"\n", str);

    return 0;
}
