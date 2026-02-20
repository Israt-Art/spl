/*WAP that will take (n x n) integer inputs into a square matrix of dimension n. Now determine whether the matrix is symmetric or not.
 Reference: http://en.wikipedia.org/wiki/Symmetric_matrix

Sample input	Sample output
3
1  7  3
7  4  5
3  5  6	Yes
2
1  3
4  2	No
*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);

    int matrix[n][n];


    printf("Enter the elements of the square matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);


    int symmetric = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric)
            break;
    }


    if (symmetric)
        printf("Yes, the matrix is symmetric.\n");
    else
        printf("No, the matrix is not symmetric.\n");

    return 0;
}

