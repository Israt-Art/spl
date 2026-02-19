/*1.		Write a program (WAP) that will print following series upto Nth terms.
1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31 …….

Sample input	Sample output
2	1, 3
5	1, 3, 5, 7, 9
11	1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 2 */

#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i == n)
            printf("%d", 2*i - 1);
        else
            printf("%d, ", 2*i - 1);
    }

    return 0;
}




