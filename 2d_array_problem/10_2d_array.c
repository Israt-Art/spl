/* 1.		WAP that will take (n x n) integer inputs into a square matrix of dimension n (where n must be an odd number). Then calculate sum of the integers based on following position pattern (consider only the boxed position during the sum). Please see the input-output.

Sample input	Sample output
5
1 2 3 4 5
2 3 4 1 6
3 4 9 6 7
4 2 6 7 8
5 4 3 2 1
	71
7
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
1 1 1 1 1 1 1
	25
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];
    int sum = 0;
    int mid = n / 2;

    /* input matrix */
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    /* sum of boxed positions:
       - both diagonals
       - middle row
       - middle column
       (without overlap)
    */
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if( i == j ||                  /* main diagonal */
                i + j == n - 1 ||          /* secondary diagonal */
                i == mid ||               /* middle row */
                j == mid )                /* middle column */
            {
                sum += a[i][j];
            }
        }
    }

    printf("%d", sum);

    return 0;
}
