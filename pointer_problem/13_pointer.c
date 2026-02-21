/*WAP that will count the digits of a given number using recursion.

*/
#include <stdio.h>

int countDigits(int n)
{
    if(n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}

int main()
{
    int num;

    scanf("%d", &num);


    if(num == 0)
        printf("1");
    else
        printf("%d", countDigits(num));

    return 0;
}




