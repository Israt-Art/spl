/*WAP that will take (m x n) integer inputs into a matrix of dimension m x n. Now just simply add all the integers in that matrix and show the result.

Sample input	Sample output
3  3
1  7  3
7  4  5
3  5  6	41
2 6
2  2  2  2  2  2
6  5  4  3  2  1
	33
*/
#include <stdio.h>

#define MAX_SIZE 10 // Maximum dimensions of the matrix

int main() {
    int m, n;
    printf("Enter the number of rows and columns of the matrix (m x n): ");
    scanf("%d %d", &m, &n);


    int matrix[m][n];

    // Input for the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    // Calculate the sum of all elements in the matrix
    int sum = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            sum += matrix[i][j];

    // Display the sum
    printf("Sum of all integers in the matrix: %d\n", sum);

    return 0;
}

