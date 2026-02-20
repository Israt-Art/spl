/*Function to take a string as input and find its length.


Sample input 	Sample output
hello world	11
I love my country	17
*/
#include <stdio.h>


int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[1000];


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }


    printf("%d\n", stringLength(str));

    return 0;
}
