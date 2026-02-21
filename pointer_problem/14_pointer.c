/*WAP that will get the largest element of an array using recursion.*/
#include <stdio.h>

int findMax(int arr[], int n)
{
    if(n == 1)
        return arr[0];

    int maxRest = findMax(arr, n - 1);

    if(arr[n - 1] > maxRest)
        return arr[n - 1];
    else
        return maxRest;
}

int main()
{
    int arr[100], n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d", findMax(arr, n));

    return 0;
}
