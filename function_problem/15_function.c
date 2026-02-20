/*15.	Function that finds and returns the minimum value in an array.

Sample input 	Sample output
157    -28    -37    26    10	Minimum Value:  -37
12       45       1     10      5      3     22	Minimum Value:     1




*/
#include <stdio.h>


int findMinimum(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
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


    int minValue = findMinimum(arr, n);


    printf("Minimum Value: %d\n", minValue);

    return 0;
}
