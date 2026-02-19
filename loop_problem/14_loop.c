/*Write a program (WAP) that will find nCr where n >= r; n and r are integers.

Sample input	Sample output
5   2	10
10   3	120
7   7	1
6   1	6
*/

#include <stdio.h>

int main() {
    int n, r;
    int nCr = 1;

    printf("Enter n and r (n >= r): ");
    scanf("%d %d", &n, &r);

    if (n < r) {
        printf("Invalid input! n should be >= r.\n");
        return 1;
    }

    for (int i = 1; i <= r; i++) {
        nCr = nCr * (n - i + 1) / i;
    }

    printf("%d C %d = %d\n", n, r, nCr);

    return 0;
}

