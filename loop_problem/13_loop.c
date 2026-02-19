/*Write a program (WAP) that will print the factorial (N!) of a given number N. Please see the sample input output.


Sample input	Sample output
1	1! = 1 = 1
2	2! = 2 X 1 = 2
3	3! = 3 X 2 X 1 = 6
4	4! = 4 X 3 X 2 X 1 = 24


*/

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d! = ", n);


    for (i = n; i >= 1; i--) {
        printf("%d", i);
        if (i != 1) {
            printf(" X ");
        }
        factorial *= i;
    }

    printf(" = %llu\n", factorial);

    return 0;
}

