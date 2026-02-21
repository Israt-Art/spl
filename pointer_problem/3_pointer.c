/*WAP that will print the elements of an array without using index.

*/
#include <stdio.h>

void printArray(int *p, int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("%d ", *p);
        p++;
    }
}

int main()
{
    int arr[100], n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printArray(arr, n);

    return 0;
}
