/*WAP that will take inputs of m x n sized matrix into a 2D array and find the maximum element with index locationfrom that matrix.

Sample input	Sample output
3 3
1 2 3
4 5 6
2 9 2	Max: 9
Location: [2][1]
2 3
9 8 7
3 4 5	Max: 9
Location: [0][0]

*/
#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the number of rows (m) and columns (n) of the matrix: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    // Input for the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    // Find the maximum element and its index location
    int max_value = matrix[0][0];
    int max_row = 0, max_col = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > max_value) {
                max_value = matrix[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }

    // Display the result
    printf("Maximum element: %d\n", max_value);
    printf("Index location: (%d, %d)\n", max_row, max_col);

    return 0;
}
