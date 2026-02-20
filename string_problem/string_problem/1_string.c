/*Write a program in C to find the length of a string without using any library function.

Sample Input	Sample Output
“My name is andy”	15
“Abc 123 7&*&*”	13

*/
#include <stdio.h>


int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = stringLength(str);

    printf("Length of the string: %d\n", length);

    return 0;
}
