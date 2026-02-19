/*Write a program (WAP) that will take N numbers as inputs and compute their average.
(Restriction: Without using any array)

Sample input	Sample output
3
10         20        30.5	AVG of 3 inputs:  20.166667
2
22.4     11.1	AVG of 2 inputs:  16.750000
*/

#include <stdio.h>

int main()
{
    int n, i;
    double x, sum = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        scanf("%lf", &x);
        sum = sum + x;
    }

    printf("AVG of %d inputs:  %.6lf", n, sum / n);

    return 0;
}
