/*WAP that will compute the sum of all elements in an array using pointers.*/
#include <stdio.h>

int arraySum(int *p, int n)
{
    int sum = 0, i;

    for(i = 0; i < n; i++)
    {
        sum = sum + (*p);
        p++;
    }

    return sum;
}

int main()
{
    int arr[100], n, i, result;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    result = arraySum(arr, n);

    printf("%d", result);

    return 0;
}
