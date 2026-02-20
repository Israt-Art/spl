/*Function to print an input character value.

Sample input 	Sample output
3	Value received from main:   3
A	Value received from main:   A
*/
#include <stdio.h>


void printValue(char val) {
    printf("Value received from main:   %c\n", val);
}

int main() {
    char input;

    printf("Enter a character or number: ");
    scanf(" %c", &input);


    printValue(input);

    return 0;
}
