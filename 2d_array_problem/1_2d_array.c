/*1.		WAP that will take 9 integers into a 3 by 3 array (2D) and show them as traditional matrix view.

Sample input	Sample output
9 8 7 6 5 4 3 2 1	9 8 7
6 5 4
3 2 1
1 1 1 2 2 2 3 3 3	1 1 1
2 2 2
3 3 3
*/

#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j;


    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }


    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
