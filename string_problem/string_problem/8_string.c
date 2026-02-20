/*Write a program in C to sort a string array in alphabetic order.

Sample Input	Sample Output
“My name is Andy”	“   AMadeimnnsyy”
“Abc 123 7&*&*”	“  &&**1237Abc”

*/

#include <stdio.h>


void sortString(char str[]) {
    int i, j;
    char temp;


    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }


    for (i = 0; i < length - 1; i++) {
        for (j = i + 1; j < length; j++) {
            if (str[i] > str[j]) {

                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    sortString(str);

    printf("Sorted string: \"%s\"\n", str);

    return 0;
}
