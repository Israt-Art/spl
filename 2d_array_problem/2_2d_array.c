/*WAP that will take (m x n) integers into a m by n array (2D) and print them both row-wise and column-wise.

Sample input (m,n)	Sample output
2 3
1 2 3
6 5 4	Row-wise: 1 2 3 6 5 4
Column-wise: 1 6 2 5 3 4
3 3
1 1 1
2 2 2
3 3 3	Row-wise: 1 1 1 2 2 2 3 3 3
Column-wise: 1 2 3 1 2 3 1 2 3
*/
#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int a[m][n];

    // input matrix
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Row-wise printing
    printf("Row-wise: ");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
    }

    printf("\n");

    // Column-wise printing
    printf("Column-wise: ");
    for(int j = 0; j < n; j++)
    {
        for(int i = 0; i < m; i++)
        {
            printf("%d ", a[i][j]);
        }
    }

    return 0;
}
