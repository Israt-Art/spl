/*WAP that will print a pattern based on the input integer n. Please see the sample input output.

Sample input	Sample output
5	____*
___***
__*****
_*******
*********
3	__*
_***
*****
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n - i; j++) {
            printf("_");
        }

        for(int k = 1; k <= 2*i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
