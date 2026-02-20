/*Write a program in C to check whether a string is a palindrome or not.

Sample Input	Sample Output
“My name is andy”	no
“madam”	yes
*/
#include <stdio.h>
#include <ctype.h>


int isPalindrome(char str[]) {
    int i = 0, j = 0;


    while (str[j] != '\0' && str[j] != '\n') {
        j++;
    }
    j--;


    while (i < j) {
        if (str[i] != str[j]) {
            return 0;
        }
        i++;
        j--;
    }

    return 1;
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (isPalindrome(str)) {
        printf("Yes, it is a palindrome.\n");
    } else {
        printf("No, it is not a palindrome.\n");
    }

    return 0;
}
