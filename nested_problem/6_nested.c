/*WAP that will print a pattern based on the input integer n. Please see the sample input output.

Sample input	Sample output
3	1
12
123
4	1
12
123
1234
*/
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
