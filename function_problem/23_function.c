/*Function find_substr( ) that takes two string arrays (a, b) as parameters, uses function str_length() to determine the lengths of the strings, and then looks for the smaller string anywhere in the bigger string. It returns 1 if the substring is found, or returns –1 if no match is found.

[Restriction: str_length() cannot uses built-in strlen() function]

Sample input (a, b)	Sample output
madam        adam	1
telescope     less	0
101010        101	1
*/
#include <stdio.h>


int str_length(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}


int find_substr(char a[], char b[]) {
    int len_a = str_length(a);
    int len_b = str_length(b);


    if (len_b > len_a) {

        char *temp_str = a;
        a = b;
        b = temp_str;


        int temp_len = len_a;
        len_a = len_b;
        len_b = temp_len;
    }


    for (int i = 0; i <= len_a - len_b; i++) {
        int j;
        for (j = 0; j < len_b; j++) {
            if (a[i + j] != b[j])
                break;
        }
        if (j == len_b)
            return 1;
    }

    return -1;
}

int main() {
    char a[100], b[100];


    printf("Enter first string: ");
    scanf("%s", a);
    printf("Enter second string: ");
    scanf("%s", b);

    int result = find_substr(a, b);
    printf("%d\n", result);

    return 0;
}
