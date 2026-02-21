/*WAP that will print a pattern based on the input integer n. Please see the sample input output.

Sample input	Sample output
4	1_____1
12___21
123_321
1234321
3	1___1
12_21
12321
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {


        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }


        int spaces = 2 * (n - i);
        for (int s = 1; s <= spaces; s++) {
            printf(" ");
        }


        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
