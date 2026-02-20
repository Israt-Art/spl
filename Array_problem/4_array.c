/*    4.	WAP  that will take n floating point numbers into an array, and then find the average of those numbers.


Sample input	Sample output
5
1.2  5.6  10.3  4.5  5.2	5.36
8
2.1  8.3  3.7  9.2  0.6  1.5 6.4 10.1	8.38




*/
#include <stdio.h>

int main()
{
    int n;
    float sum = 0.0;

    scanf("%d", &n);

    float a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
        sum = sum + a[i];
    }

    printf("%.2f", sum / n);

    return 0;
}
