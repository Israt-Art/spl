/*9.	WAP that will take n alphabets into an array, and then count number of vowels in that array.

Sample input	Sample output
7
AKIOUEH	Count: 5
29
UNITEDINTERNATIONALUNIVERSITY	Count: 13


*/

#include <stdio.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);

    char a[n + 1];   // +1 for null character

    scanf("%s", a);

    for(int i = 0; i < n; i++)
    {
        if(a[i] == 'A' || a[i] == 'E' || a[i] == 'I' ||
           a[i] == 'O' || a[i] == 'U' ||
           a[i] == 'a' || a[i] == 'e' || a[i] == 'i' ||
           a[i] == 'o' || a[i] == 'u')
        {
            count++;
        }
    }

    printf("Count: %d", count);

    return 0;
}
