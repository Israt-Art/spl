/*Function to determine if a number is even or odd.


Sample input 	Sample output
3	odd
8	even
*/
#include <stdio.h>


void checkEvenOdd(int num) {
    if (num % 2 == 0)
        printf("even\n");
    else
        printf("odd\n");
}

int main() {
    int n;


    printf("Enter a number: ");
    scanf("%d", &n);


    checkEvenOdd(n);

    return 0;
}
