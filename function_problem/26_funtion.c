/*Program that implements function to perform operations on a MXN matrix:

InputMatrix()
ShowMatrix()
ScalarMultiply()


Sample input 	Sample output
2   2

7    16
12  10

2	Original:
7      16
12    10

Multiplied by 2:
14     32
24     20

3   5

7    16    55    13    12
12  10    52     0      7
-2     1      2     4      9

-1	Original:
7      16      55      13    12
12    10      52        0      7
-2     1         2         4      9

Multiplied by -1:
-14    -32    -110    -26      -24
-24    -20    -104       0      -14
   4      -2         -4      -8      -18
*/
#include <stdio.h>

#define ROWS 3
#define COLS 5


void InputMatrix(int mat[ROWS][COLS]) {
    printf("Enter %d elements for a %dx%d matrix:\n", ROWS*COLS, ROWS, COLS);
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}


void ShowMatrix(int mat[ROWS][COLS]) {
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            printf("%6d", mat[i][j]);
        }
        printf("\n");
    }
}


void ScalarMultiply(int mat[ROWS][COLS], int scalar, int result[ROWS][COLS]) {
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            result[i][j] = mat[i][j] * scalar;
        }
    }
}

int main() {
    int matrix[ROWS][COLS];
    int result[ROWS][COLS];
    int scalar;


    InputMatrix(matrix);

    printf("\nOriginal:\n");
    ShowMatrix(matrix);

    printf("\nEnter scalar to multiply: ");
    scanf("%d", &scalar);


    ScalarMultiply(matrix, scalar, result);
    printf("\nMultiplied by %d:\n", scalar);
    ShowMatrix(result);

    return 0;
}
