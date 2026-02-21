/*WAP that will print the elements of an array in reverse indexed order.
*/
#include <stdio.h>

void printReverse(int *p, int n)
{
    int i;
    p = p + n - 1;

    for(i = 0; i < n; i++)
    {
        printf("%d ", *p);
        p--;
    }
}

int main()
{
    int arr[100], n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printReverse(arr, n);

    return 0;
}





