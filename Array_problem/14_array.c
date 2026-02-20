/* WAP that will first take n integers into an array A and then m integers into array B. Now swap all elements between array A and B. Finally show all elements of both array A and B.

Sample input	Sample output
8
7 8 1 3 2 6 4 3
3
3 2 1	Array A : 3 2 1
Array B : 7 8 1 3 2 6 4 3

*/

#include <stdio.h>

int main() {
    int n, m;


    printf("Enter the number of elements in array A: ");
    scanf("%d", &n);
    int A[100], B[100];
    printf("Enter the elements of array A: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }


    printf("Enter the number of elements in array B: ");
    scanf("%d", &m);
    printf("Enter the elements of array B: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }


    int temp;
    int max = n > m ? n : m;
    for (int i = 0; i < max; i++) {
        if (i < n && i < m) {
            temp = A[i];
            A[i] = B[i];
            B[i] = temp;
        }
    }

    printf("Array A : ");
    for (int i = 0; i < m; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");


    printf("Array B : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}
