/*16.	WAP that will take n positive integers into an array A. Now find all the integers that have an odd index and replace them by 0 in array A. Finally show all elements of array A.

Sample input	Sample output
8
7 8 1 3 2 6 4 3	7 0 1 0 2 0 4 0

3
3 2 1	3 0 1
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


    for(int i = 0; i < n; i++) {
        if(i % 2 == 1) {
            A[i] = 0;
        }
    }


    printf("Updated array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
