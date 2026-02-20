/* WAP that will take (m x n) positive integer inputs into a matrix of dimension m x n. Now replace all the duplicate integers by -1 in that matrix. Finally display it.

Sample input	Sample output
3  3
1  7  3
7  4  5
3  5  6	 1  7  3
-1  4  5
-1 -1  6
2 6
2  2  2  2  2  2
6  5  4  3  2  1
	2 -1 -1 -1 -1 -1
6  5  4   3 -1  1

*/

#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int m, n;

    printf("Enter the dimensions (m x n) of the matrix: ");
    scanf("%d %d", &m, &n);

    int matrix[MAX_SIZE][MAX_SIZE];


    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int current = matrix[i][j];
            for (int k = 0; k < m; k++) {
                for (int l = 0; l < n; l++) {
                    if (i != k || j != l) {
                        if (matrix[k][l] == current) {
                            matrix[k][l] = -1;
                        }
                    }
                }
            }
        }
    }


    printf("Modified matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}


