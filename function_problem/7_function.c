/*Function to calculate the sum of n numbers coming from the console and stored in an array.

Sample input 	Sample output
3
80    33     27	Sum In Function: 140
Sum In Main: 140
2
100    -100	Sum In Function:  0
Sum In Main:  0
*/
#include <stdio.h>


int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Sum In Function: %d\n", sum);
    return sum;
}

int main() {
    int n;


    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];


    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    int total = sumArray(arr, n);


    printf("Sum In Main: %d\n", total);

    return 0;
}
