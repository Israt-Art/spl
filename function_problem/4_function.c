/*Function to determine if a number is positive, negative or zero.


Sample input 	Sample output
3	positive
-5	negative
0	zero


*/
#include <stdio.h>


void checkNumber(int num) {
    if (num > 0)
        printf("positive\n");
    else if (num < 0)
        printf("negative\n");
    else
        printf("zero\n");
}

int main() {
    int n;


    printf("Enter a number: ");
    scanf("%d", &n);


    checkNumber(n);

    return 0;
}
