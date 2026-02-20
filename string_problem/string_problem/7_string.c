/* Write a program in C to toggle the case of each character in a string.

Sample Input	Sample Output
“My name is Andy”	“mY NAME IS aNDY”
“& I am 20 Years old”	“& i AM 20 yEARS OLD”

*/

#include <stdio.h>


void toggleCase(char str[]) {
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    toggleCase(str);

    printf("Toggled string: \"%s\"\n", str);

    return 0;
}
