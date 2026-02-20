/*WAP that will take (n x n) integer inputs into a square matrix of dimension n (where n must be an odd number). Then calculate sum of the integers at first row, last row and two diagonals without overlap. Please see the sample input-output.

Sample input	Sample output
5
1 2 3 4 5
2 3 4 1 6
3 4 9 6 7
4 2 6 7 8
5 4 3 2 1
	52
7
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
	23
*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];
    int sum = 0;

    /* input matrix */
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    /* calculate sum of
       first row, last row and two diagonals
       without overlap
    */
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if( i == 0 ||                 /* first row */
                i == n - 1 ||             /* last row  */
                i == j ||                 /* main diagonal */
                i + j == n - 1 )          /* secondary diagonal */
            {
                sum += a[i][j];
            }
        }
    }

    printf("%d", sum);

    return 0;
}
