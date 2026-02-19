/*Write a program (WAP) that will find xy (x to the power y) where x, y are positive integers.

Sample input(x,y)	Sample output
5   2	25
2   0	1
6   1	6
0   5	0
*/

#include <stdio.h>

int main() {
    int x, y;
    int result = 1;

    printf("Enter x and y (positive integers): ");
    scanf("%d %d", &x, &y);


    if (y == 0) {
        printf("%d ^ %d = 1\n", x, y);
        return 0;
    }
    if (x == 0) {
        printf("%d ^ %d = 0\n", x, y);
        return 0;
    }


    for (int i = 1; i <= y; i++) {
        result *= x;
    }

    printf("%d ^ %d = %d\n", x, y, result);

    return 0;
}

