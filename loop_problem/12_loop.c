/*Write a program (WAP) that will print Fibonacci series upto Nth terms.
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, …….

*/

#include <stdio.h>

int main() {
    int n, i;
    long long int a = 1, b = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld", a);
        } else if (i == 2) {
            printf(", %lld", b);
        } else {
            next = a + b;
            printf(", %lld", next);
            a = b;
            b = next;
        }
    }

    printf("\n");
    return 0;
}


