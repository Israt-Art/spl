/*WAP that will calculate the following mathematical function for the input of x. Use only the series to solve the problem.


Sample input	Sample output
1	0.841
2	0.909
3	0.141
*/

#include <stdio.h>

int main() {
    int nTerms = 10;
    double x, term, sum = 0;
    int i, sign;

    printf("Enter x (in radians): ");
    scanf("%lf", &x);

    for (i = 0; i < nTerms; i++) {

        term = 1;
        for (int j = 1; j <= 2*i + 1; j++)
            term *= x / j;


        sign = (i % 2 == 0) ? 1 : -1;
        sum += sign * term;
    }

    printf("sin(%.0lf) ≈ %.3lf\n", x, sum);

    return 0;
}

