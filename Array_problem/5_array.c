/*WAP that will take n integer numbers into an array, and then sum up all the even indexed integers in that array.

Sample input	Sample output
5
1  2  3  4  5	9
6
2  8  3  9  0  1	5


*/

#include <stdio.h>

int main()
{
    int n, sum = 0;

    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            sum = sum + a[i];
        }
    }

    printf("%d", sum);

    return 0;
}
