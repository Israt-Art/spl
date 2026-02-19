/*WAP that will find the GCD (greatest common divisor) and LCM (least common multiple) of two positive integers.

Sample input	Sample output
5   7	GCD: 1
LCM: 35
12  12	GCD: 12
LCM: 12
12   32	GCD: 4
LCM: 96
*/

#include <stdio.h>

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    int resultGCD = gcd(a, b);
    int resultLCM = (a * b) / resultGCD;

    printf("GCD: %d\n", resultGCD);
    printf("LCM: %d\n", resultLCM);

    return 0;
}
