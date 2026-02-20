/*17.	WAP that will take n integers into an array A. Now sort them in ascending order within that array. Finally show all elements of array A.
Reference: http://en.wikipedia.org/wiki/Bubble_sort

Sample input	Sample output
8
7 8 1 3 2 6 4 3	1  2  3  3  4  6  7  8

3
3 2 1	1  2  3

*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }


    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }


    printf("Sorted array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
