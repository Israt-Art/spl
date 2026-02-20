/*WAP that will take inputs of two m x n sized matrix into two 2D array, suppose A and B. Now do C = A + B. Finally display all the elements from matrix / 2D array C.

Sample input	Sample output
2 3
1 2 3
2 3 4
1 1 1
2 2 2
	2 3 4
4 5 6
*/
#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the dimensions (m x n) of the matrices: ");
    scanf("%d %d", &m, &n);

    int matrixA[m][n], matrixB[m][n], matrixC[m][n];

    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }


    printf("Matrix C (A + B):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
            printf("%d ", matrixC[i][j]);
        }
        printf("\n");
    }

    return 0;
}

