/*WAP that will print a pattern based on the input odd integer n. Please see the sample input output.

Sample input	Sample output
5	*****
*___*
*****
*___*
*****
3	***
*_*
***
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {


        if (i % 2 != 0) {
            for (int j = 1; j <= n; j++) {
                printf("*");
            }
        }

        else {
            printf("*");
            for (int j = 1; j <= n - 2; j++) {
                printf("_");
            }
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
