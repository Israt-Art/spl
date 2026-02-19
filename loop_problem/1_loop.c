/*Write a program (WAP) that will print following series upto Nth terms
*/
#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i == n)
            printf("%d", i);
        else
            printf("%d, ", i);
    }

    return 0;
}
