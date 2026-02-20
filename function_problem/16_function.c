/*16.	Function that multiplies the array elements by 2 and returns the array.

Sample input 	Sample output
157    -28    -37    26    10	314     -56    -74    52    20
12       45       1     10      5      3     22	24        90       2     20    10     6     44


*/
#include <stdio.h>


void multiplyByTwo(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] *= 2;
    }
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


    multiplyByTwo(arr, n);


    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}
