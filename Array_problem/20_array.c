/* WAP that will take n integers into an array A and m positive integers into array B. Now find the union (set operation) of array A and B.

Sample input	Sample output
8
7 8 1 5 2 6 4 3
6
1 3 6 0 9 2	7 8 1 5 2 6 4 3 0 9

3
1 2 3
2
4 5	1 2 3 4 5


*/

#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of elements in array A: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter %d elements for array A: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("Enter number of elements in array B: ");
    scanf("%d", &m);
    int B[m];
    printf("Enter %d elements for array B: ", m);
    for(int i = 0; i < m; i++)
        scanf("%d", &B[i]);

    int unionArr[n + m];
    int size = 0;


    for(int i = 0; i < n; i++) {
        unionArr[size++] = A[i];
    }


    for(int i = 0; i < m; i++) {
        int isDuplicate = 0;
        for(int j = 0; j < size; j++) {
            if(B[i] == unionArr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if(!isDuplicate) {
            unionArr[size++] = B[i];
        }
    }

    printf("Union: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");

    return 0;
}
