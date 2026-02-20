/*Function “GenNthPrime()” to compute the Nth prime number, where N is an integer input.

Sample input 	Sample output
5	5th Prime:  11
10	10th Prime:  29
40	40th Prime: 173
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


int GenNthPrime(int N) {
    int count = 0;
    int num = 2;

    while (1) {
        if (IsPrime(num)) {
            count++;
            if (count == N)
                return num;
        }
        num++;
    }
}

int main() {
    int N;


    printf("Enter N: ");
    scanf("%d", &N);


    int nthPrime = GenNthPrime(N);
    printf("%dth Prime: %d\n", N, nthPrime);

    return 0;
}
