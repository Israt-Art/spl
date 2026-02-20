/*Write a program in C to remove all repeated characters in a string.

Sample Input	Sample Output
“i like programming in C”	“i lkeprogamnC”
“My name is Andy”	“My nameisAd”

*/
#include <stdio.h>

void removeDuplicates(char str[]) {
    int i, j, k;
    char result[200];
    int found;

    k = 0;

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        found = 0;

        for (j = 0; j < k; j++) {
            if (str[i] == result[j]) {
                found = 1;
                break;
            }
        }


        if (!found) {
            result[k] = str[i];
            k++;
        }
    }

    result[k] = '\0';


    i = 0;
    while (result[i] != '\0') {
        str[i] = result[i];
        i++;
    }
    str[i] = '\0';
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    removeDuplicates(str);

    printf("String after removing duplicates: \"%s\"\n", str);

    return 0;
}
