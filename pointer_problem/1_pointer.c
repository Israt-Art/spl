/*WAP that will add two numbers using pointers.

Sample input	Sample output
3 5	8
5 9	14
*/
#include <stdio.h>

int add(int *x, int *y)
{
    return (*x + *y);
}

int main()
{
    int a, b, result;

    scanf("%d %d", &a, &b);

    result = add(&a, &b);

    printf("%d", result);

    return 0;
}
