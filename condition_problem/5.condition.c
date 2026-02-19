/*Program that will read from the console a random positive nonzero number and determine if it is a power of 2. */


#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n > 0 && (n & (n - 1)) == 0)
        printf("Yes");
    else
        printf("No");

    return 0;
}
