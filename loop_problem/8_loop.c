/*Write a program (WAP) that will reverse the digits of an input integer.

Sample input	Sample output
13579	97531
4321	1234
*/

#include <stdio.h>

int main()
{
    int n, rev = 0;

    scanf("%d", &n);

    while (n != 0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }

    printf("%d", rev);

    return 0;
}

