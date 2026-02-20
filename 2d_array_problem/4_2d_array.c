/*1.		WAP that will take inputs of a n sized square matrix into a 2D array. Now show all the elements of its two diagonals. Reference: http://en.wikipedia.org/wiki/Main_diagonal

Sample input	Sample output
5
1 2 3 4 5
5 4 3 2 1
2 2 2 2 2
6 7 8 9 0
1 9 3 7 4	Major diagonal: 1 4 2 9 4
Minor diagonal: 5 2 2 7 1

*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];


    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }


    printf("Major diagonal: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i][i]);
    }

    printf("\n");


    printf("Minor diagonal: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i][n - 1 - i]);
    }

    return 0;
}
