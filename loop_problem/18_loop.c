/*WAP that will determine whether an integer is a palindrome number or not.

Sample input	Sample output
9	Yes
91	No
222	Yes
12321	Yes
*/

#include <stdio.h>

int main() {
    int n, original, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Reverse the number
    while (n > 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    if (original == reversed)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

