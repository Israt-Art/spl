/*WAP that will take n positive integers into an array A. Now find all the integers that are divisible by 3 and replace them by -1 in array A. Finally show all elements of array A.

Sample input	Sample output
8
7 8 1 3 2 6 4 3	7 8 1 -1 2 -1 4 -1

3
3 2 1	-1 2 1



*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int A[100];
    printf("Enter the elements of array A: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }


    for (int i = 0; i < n; i++) {
        if (A[i] % 3 == 0) {
            A[i] = -1;
        }
    }

    printf("Updated array A:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
