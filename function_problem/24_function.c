/*Program that continuously takes two positive integers as inputs and uses two functions to find their GCD (greatest common divisor) and LCM (least common multiple). Both functions take parameters and returns desired values.

[Hint: Use infinite loop to process inputs]

Sample input	Sample output
5   7	GCD: 1
LCM: 35
12  12	GCD: 12
LCM: 12
12   32	GCD: 4
LCM: 96
*/
#include <stdio.h>

int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int find_lcm(int a, int b) {
    return (a * b) / find_gcd(a, b);
}

int main() {
    int a, b;

    while (1) {
        printf("Enter two positive integers: ");
        if (scanf("%d %d", &a, &b) != 2) {
            printf("Invalid input! Exiting.\n");
            break;
        }
        if (a <= 0 || b <= 0) {
            printf("Only positive integers allowed! Exiting.\n");
            break;
        }

        int gcd = find_gcd(a, b);
        int lcm = find_lcm(a, b);

        printf("GCD: %d\n", gcd);
        printf("LCM: %d\n\n", lcm);
    }

    return 0;
}
