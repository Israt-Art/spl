/*7.	WAP that will take n integer numbers into an array, and then reverse all the integers within that array. Finally print them all from 0 index to last valid index.

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

    int i = 0, j = n - 1, temp;

    while(i < j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;

        i++;
        j--;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if(i != n - 1)
            printf(" ");
    }

    return 0;
}
