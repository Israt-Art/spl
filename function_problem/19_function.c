/*19.	Function “GeneratePrime()” to compute the prime numbers less than N, where N is an input integer. GeneratePrime() uses IsPrime() to check whether a number is prime or not.

Sample input 	Sample output
5	Prime less than 5:   2, 3
10	Prime less than 10:   2, 3, 5, 7
40	Prime less than 17:   2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37

*/

#include <stdio.h>
#include <stdbool.h>


bool IsPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}


void GeneratePrime(int N) {
    printf("Prime less than or equal to %d: ", N);
    int first = 1;
    for (int i = 2; i <= N; i++) {
        if (IsPrime(i)) {
            if (!first)
                printf(", ");
            printf("%d", i);
            first = 0;
        }
    }
    printf("\n");
}

int main() {
    int N;


    printf("Enter N: ");
    scanf("%d", &N);


    GeneratePrime(N);

    return 0;
}
