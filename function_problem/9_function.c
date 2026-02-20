/*Function to calculate the factorial of a number.


Sample input 	Sample output
3	6
5	120


*/
#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;


    printf("Enter a number: ");
    scanf("%d", &n);


    printf("%lld\n", factorial(n));

    return 0;
}
