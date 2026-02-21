/*WAP that will print a pattern based on the input integer n. Please see the sample input output.

Sample input	Sample output
3	1
23
345
4	1
23
345
4567
*/
#include <stdio.h>

int main() {
    int n, count = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}
