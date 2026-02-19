/*WAP that will determine whether a number is prime or not.

Sample input	Sample output
1	Not prime
2	Prime
11	Prime
39	Not prime
101	Prime
*/

#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);


    if (n <= 1) {
        isPrime = 0;
    } else {

        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is Prime\n", n);
    else
        printf("%d is Not prime\n", n);

    return 0;
}

