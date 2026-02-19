/*Program that will take two numbers X & Y as inputs and decide whether X is greater than/less than/equal to Y.*/

#include <stdio.h>

int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);

    if(X > Y)
        printf("%d is greater than %d", X, Y);
    else if(X < Y)
        printf("%d is less than %d", X, Y);
    else
        printf("%d is equal to %d", X, Y);

    return 0;
}
