/*WAP that will take (m x n) integer inputs into a matrix of dimension m x n. Now reverse that matrix within itself and display it. Reversal means swap 1st column with the nth column, swap 2nd column with the (n-1)th column and so on…

Sample input	Sample output
3 3
1 2 3
4 5 6
2 9 2	3 2 1
6 5 4
2 9 2
2 6
1 2 3 4 5 6
9 8 7 6 5 4	6 5 4 3 2 1
4 5 6 7 8 9
*/

#include <stdio.h>

int main() {
    int m, n;

    // Input dimensions of the matrix
    printf("Enter the dimensions (m x n) of the matrix: ");
    scanf("%d %d", &m, &n);

    // Declare the matrix
    int matrix[m][n];

    // Input for the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    // Reverse the columns within the matrix
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n / 2; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - j - 1];
            matrix[i][n - j - 1] = temp;
        }

    // Display the reversed matrix
    printf("Reversed matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}


