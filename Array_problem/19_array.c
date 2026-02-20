/* 	WAP that will take n integers into array A and m positive integers into array B. Now find the intersection (set operation) of array A and B.

Sample input	Sample output
8
7 8 1 5 2 6 4 3
6
1 3 6 0 9 2	1 2 6 3
3
1 2 3
2
4 5	Empty set */

#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of elements in array A: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter %d elements for array A: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter number of elements in array B: ");
    scanf("%d", &m);

    int B[m];
    printf("Enter %d elements for array B: ", m);
    for(int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    int found = 0; // flag to check if intersection exists
    printf("Intersection: ");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(A[i] == B[j]) {
                printf("%d ", A[i]);
                B[j] = -1; // mark as used to avoid duplicates in output
                found = 1;
                break;
            }
        }
    }

    if(!found) {
        printf("Empty set");
    }

    printf("\n");
    return 0;
}



