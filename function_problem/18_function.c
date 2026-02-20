/*18.	Function “IsPrime()” to determine whether a number is prime or not.

Sample input	Sample output
1	Not prime
2	Prime
11	Prime
39	Not prime
101	Prime

*/
#include <stdio.h>
#include <stdbool.h>


bool IsPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;


    printf("Enter a number: ");
    scanf("%d", &num);


    if (IsPrime(num)) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}
