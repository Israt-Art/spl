/*1.		WAP that will take inputs of two 3 x 3 sized matrix into two 2D array, suppose A and B. Now do C = A * B (multiplication). Finally display all the elements from matrix / 2D array C.

Sample input	Sample output
1 2 3
4 5 6
7 8 9
2 2 2
2 2 2
1 1 1	9 9 9
24 24 24
39 39 39
*/

#include <stdio.h>

int main() {
    int A[3][3], B[3][3], C[3][3];

    // Input for matrix A
    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &A[i][j]);

    // Input for matrix B
    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &B[i][j]);

    // Matrix multiplication
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display the result
    printf("Resultant matrix C (A * B):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

