/*WAP that will print a pattern based on the input integer n. Please see the sample input output.

Sample input	Sample output
3	123
234
345
4	1234
2345
3456
4567
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= n; j++) {
            printf("%d", j + i);
        }
        printf("\n");
    }

    return 0;
}
