/*WAP that will take n integer numbers into an array, and then print all the integers into reverse order (from the last valid index to index 0).

Sample input	Sample output
5
1  2  3  4  5	5  4  3  2  1
6
2  8  3  9  0  1	1  0  9  3  8  2
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = n - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
        if(i != 0)
            printf(" ");
    }

    return 0;
}
