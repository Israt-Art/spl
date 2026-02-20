/*Function to determine only even numbers in an array of input integers.

Sample input 	Sample output
24    77    117    -512    1024	24    -512    1024
45    33     0        256      	0       256
*/
#include <stdio.h>


void printEvenNumbers(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d\t", arr[i]);
        }
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


    printEvenNumbers(arr, n);

    return 0;
}
