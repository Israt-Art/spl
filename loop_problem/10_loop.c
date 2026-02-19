/*Write a program (WAP) that will give the sum of first Nth terms for the following series.
1, -2, 3, -4, 5, -6, 7, -8, 9, -10, 11, -12, 13, -14, …….

Sample input	Sample output
2	Result: -1
3	Result: 2
4	Result: -2
*/

#include <stdio.h>

int main()
{
    int N, i, sum = 0;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
            sum -= i;
        else
            sum += i;
    }

    printf("Result: %d\n", sum);

    return 0;
}

