/*WAP that will find the maximum number between two numbers using a pointer.

*/
#include <stdio.h>

int max(int *x, int *y)
{
    if(*x > *y)
        return *x;
    else
        return *y;
}

int main()
{
    int m, n, result;

    scanf("%d %d", &m, &n);

    result = max(&m, &n);

    printf("%d", result);

    return 0;
}
