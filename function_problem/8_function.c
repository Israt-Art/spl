/*Function that takes an array of n integer numbers as input and prints them in reverse order.


Sample input 	Sample output
3
4 8 2	2 8 4
7
5 12 34 8 43 21 9	9 21 43 8 34 12 5
*/
#include <stdio.h>

void printReverse(int arr[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
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


    printReverse(arr, n);

    return 0;
}
