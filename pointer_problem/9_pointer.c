/*WAP that will display numbers 1 to 10 using recursion.*/

#include <stdio.h>

void printNumbers(int *p)
{
    if(*p > 10)
        return;

    printf("%d ", *p);
    (*p)++;
    printNumbers(p);
}

int main()
{
    int n = 1;
    printNumbers(&n);
    return 0;
}

