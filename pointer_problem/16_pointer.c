/*WAP that will check whether a given String is Palindrome or not.
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>


int isPalindrome(char str[], int start, int end) {
    if (start >= end)
        return 1;
    if (str[start] != str[end])
        return 0;
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);


    for(int i = 0; str[i]; i++)
        str[i] = tolower(str[i]);

    int len = strlen(str);

    if (isPalindrome(str, 0, len - 1))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
