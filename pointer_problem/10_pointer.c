/*WAP that will calculate the sum of numbers from 1 to n using recursion.*/
#include <stdio.h>

int sumNumbers(int n)
{
    if(n == 1)
        return 1;
    return n + sumNumbers(n - 1);
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d", sumNumbers(n));

    return 0;
}





