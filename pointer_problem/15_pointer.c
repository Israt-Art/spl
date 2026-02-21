/*WAP that will print even or odd numbers in given range using recursion.*/

#include <stdio.h>


void printEven(int start, int end) {
    if (start > end)
        return;
    if (start % 2 == 0)
        printf("%d ", start);
    printEven(start + 1, end);
}


void printOdd(int start, int end) {
    if (start > end)
        return;
    if (start % 2 != 0)
        printf("%d ", start);
    printOdd(start + 1, end);
}

int main() {
    int start, end, choice;

    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Enter 1 for even numbers, 2 for odd numbers: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Even numbers: ");
        printEven(start, end);
    } else if (choice == 2) {
        printf("Odd numbers: ");
        printOdd(start, end);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}



