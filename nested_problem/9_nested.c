/*WAP that will print a pattern based on the input integer n. Please see the sample input output.

Sample input	Sample output
5	10101
01010
10101
01010
10101
3	101
010
101
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {

            if((i + j) % 2 == 0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }

    return 0;
}
