/* Write a program in C to find the reverse of a string.

Sample Input	Sample Output
“My name is Andy”	“ydnA si eman yM”
“Abc 123 7&*&*”	“*&*&7 321 cbA”

*/

#include <stdio.h>


void reverseString(char str[]) {
    int i = 0, j = 0;


    while (str[j] != '\0' && str[j] != '\n') {
        j++;
    }
    j--;


    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    reverseString(str);

    printf("Reversed string: \"%s\"\n", str);

    return 0;
}
