/*WAP that will take inputs of a 3 by 3 matrix into a 2D array. Now find the determinant of this matrix. http://www.mathsisfun.com/algebra/matrix-determinant.html

Sample input	Sample output
1 2 3
4 5 6
7 8 9
*/
#include <stdio.h>

int main()
{
    int a[3][3];
    int det;


    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }


    det = a[0][0] * (a[1][1]*a[2][2] - a[1][2]*a[2][1])
        - a[0][1] * (a[1][0]*a[2][2] - a[1][2]*a[2][0])
        + a[0][2] * (a[1][0]*a[2][1] - a[1][1]*a[2][0]);

    printf("%d", det);

    return 0;
}
