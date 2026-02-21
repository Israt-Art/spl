/*WAP that will print a pattern based on the input odd integer n. Please see the sample input output.

Sample input	Sample output
9	____*
___***
__*****
_*******
*********
_*******
__*****
___***
____*
3	_*
***
_*
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);


    for (int i = 1; i <= n; i += 2) {

        for (int s = 0; s < (n - i) / 2; s++) {
            printf(" ");
        }

        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }


    for (int i = n - 2; i >= 1; i -= 2) {

        for (int s = 0; s < (n - i) / 2; s++) {
            printf(" ");
        }

        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
