/*Write a program that takes an integer number n as input and find out the sum of the following series up to n terms.
1 + 12 + 123 + 1234 + …….

Sample input	Sample output
1	1
2	13
3	136
4	1370



*/

#include <stdio.h>

int main() {
    int n, term = 0, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        term = term * 10 + i;
        sum += term;
    }

    printf("Sum = %d\n", sum);

    return 0;
}

