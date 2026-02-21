/*WAP that will print a pattern based on the input integer n. Please see the sample input output.

Sample input	Sample output
4	****
****
****
****
2	**
**
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
