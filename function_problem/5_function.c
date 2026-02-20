/*Function that takes two numbers as input and determines if the first number is greater than, equal to or less than the second number.


Sample input 	Sample output
5 4	5 is greater than 4
2 6	2 is less than 6
8 8	8 is equal to 8
*/

#include <stdio.h>


void compareNumbers(int a, int b) {
    if (a > b)
        printf("%d is greater than %d\n", a, b);
    else if (a < b)
        printf("%d is less than %d\n", a, b);
    else
        printf("%d is equal to %d\n", a, b);
}

int main() {
    int num1, num2;


    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);


    compareNumbers(num1, num2);

    return 0;
}
