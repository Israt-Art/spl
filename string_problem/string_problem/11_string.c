/*Write a program in C to add the digits in a string.

Sample Input	Sample Output
“I am 20 years old”	2
“Abc 123 7&*&*”	13

*/
#include <stdio.h>


int sumDigits(char str[]) {
    int sum = 0;
    int i = 0;

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= '0' && str[i] <= '9') {
            sum += str[i] - '0';
        }
        i++;
    }

    return sum;
}

int main() {
    char str[200];
    int result;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    result = sumDigits(str);

    printf("Sum of digits: %d\n", result);

    return 0;
}
