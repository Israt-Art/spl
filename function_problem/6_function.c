/*Function to calculate the sum of n numbers coming from the console.

Sample input 	Sample output
80    33     27	Sum In Function: 140
Sum In Main: 140
100    -100  	Sum In Function:  0
Sum In Main:  0
*/
#include <stdio.h>


int sumNumbers(int n) {
    int sum = 0, num;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
    }
    printf("Sum In Function: %d\n", sum);
    return sum;
}

int main() {
    int n, total;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    total = sumNumbers(n);

    printf("Sum In Main: %d\n", total);

    return 0;
}
