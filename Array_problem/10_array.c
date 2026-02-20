/*WAP that will take n integers into an array, and then search a number into that array. If found then print its index. If not found then print “NOT FOUND”.

Sample input	Sample output
8
7 8 1 3 2 6 4 3
3	FOUND at index position: 3, 7
8
7 8 1 3 2 6 4 3
5	NOT FOUND


*/

#include <stdio.h>

int main()
{
    int n, key, found = 0;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &key);

    printf("");

    for(int i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            if(found == 0)
                printf("FOUND at index position: %d", i);
            else
                printf(", %d", i);

            found = 1;
        }
    }

    if(!found)
        printf("NOT FOUND");

    return 0;
}
