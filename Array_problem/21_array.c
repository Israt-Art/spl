/*WAP that will take n integers into an array A and m positive integers into array B. Now find the difference (set operation) of array A and B or (A-B).

Sample input	Sample output
8
7 8 1 5 2 6 4 3
6
1 3 6 0 9 2	7 8 5 4

3
1 2 3
2
4 5	1 2 3
*/

#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of elements in array A: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter %d elements for array A: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("Enter number of elements in array B: ");
    scanf("%d", &m);
    int B[m];
    printf("Enter %d elements for array B: ", m);
    for(int i = 0; i < m; i++)
        scanf("%d", &B[i]);

    int foundDiff = 0;
    printf("Difference (A - B): ");
    for(int i = 0; i < n; i++) {
        int isInB = 0;
        for(int j = 0; j < m; j++) {
            if(A[i] == B[j]) {
                isInB = 1;
                break;
            }
        }
        if(!isInB) {
            printf("%d ", A[i]);
            foundDiff = 1;
        }
    }

    if(!foundDiff) {
        printf("Empty set");
    }

    printf("\n");
    return 0;
}
