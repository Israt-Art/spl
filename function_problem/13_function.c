/*Function to swap two numbers.
(Restriction: Pass by reference)

Sample input 	Sample output
10       20	Value in func:    20    10
Value in main:   20    10
*/
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Value in func:    %d    %d\n", *a, *b);
}

int main() {
    int x, y;


    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);


    swap(&x, &y);


    printf("Value in main:   %d    %d\n", x, y);

    return 0;
}
