/*Function to take two positive numbers x and y as input and calculate x to the power y.


Sample input 	Sample output
3 4	3 to the power 4 is 81
10 3	10 to the power 3 is 1000
*/
#include <stdio.h>


long long power(int x, int y) {
    long long result = 1;
    for (int i = 1; i <= y; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int x, y;


    printf("Enter base and exponent: ");
    scanf("%d %d", &x, &y);


    printf("%d to the power %d is %lld\n", x, y, power(x, y));

    return 0;
}
