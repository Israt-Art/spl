/*WAP that will take n integers into an array A, and then copy all numbers in reverse order from array A to another array B. Finally show all elements of both array A and B.

Sample input	Sample output
8
7 8 1 3 2 6 4 3	Array A : 7 8 1 3 2 6 4 3
Array B : 3 4 6 2 3 1 8 7
3
3 2 1	Array A : 3 2 1
Array B : 1 2 3

 */
 #include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int A[n], B[n];


    for(int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }


    for(int i = 0; i < n; i++)
    {
        B[i] = A[n - 1 - i];
    }


    printf("Array A :");
    for(int i = 0; i < n; i++)
    {
        printf(" %d", A[i]);
    }
    printf("\n");


    printf("Array B :");
    for(int i = 0; i < n; i++)
    {
        printf(" %d", B[i]);
    }

    return 0;
}
