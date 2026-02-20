/*Function find_substr( ) that takes two string arrays (a, b) as parameters, returns 1 if string b is found anywhere in string a, or returns –1 if no match is found.

(Assuming, strlen(a)>strlen(b))

Sample input (a, b)	Sample output
madam        adam	1
telescope     less	0
101010        101	1
*/
#include <stdio.h>
#include <string.h>

int find_substr(char a[], char b[]) {
    int len_a = strlen(a);
    int len_b = strlen(b);

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

    printf("Enter string a: ");
    scanf("%s", a);
    printf("Enter string b: ");
    scanf("%s", b);


    int result = find_substr(a, b);
    printf("%d\n", result);

    return 0;
}
