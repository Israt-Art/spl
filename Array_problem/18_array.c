/*WAP that will take n integers into an array A. Now remove all duplicates numbers from that array. Finally print all elements from that array.

Sample input	Sample output
8
2 8 1 3 2 6 4 3	2 8 1 3 6 4
3
3 3 3	3

4
6 7 8 9	6 7 8 9

*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int newSize = 0;

    for(int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for(int j = 0; j < newSize; j++) {
            if(A[i] == A[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if(!isDuplicate) {
            A[newSize] = A[i];
            newSize++;
        }
    }

    printf("Array without duplicates: ");
    for(int i = 0; i < newSize; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
