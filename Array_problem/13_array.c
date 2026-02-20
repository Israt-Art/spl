/*13.	WAP that will take n integer numbers as input in an array and then delete a number from a position specified by the user in the array.

Sample input	Sample output
10
9 11 34 23 16 15 2 37 89 54
position: 4	9 11 34 23 15 2 37 89 54
5
32 14 9 48 6
position: 0	14 9 48 6

*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter the elements separated by space: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pos;
    printf("Enter the position to delete: ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return 1;
    }


    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("Updated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
