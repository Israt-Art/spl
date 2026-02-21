/*WAP that will print a pattern based on the input integer n. Please see the sample input output.

Sample input	Sample output
5	*****
****
***
**
*
2	**
*
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
