/*Program to convert a positive integer to another base using the following functions-

I.	Get_Number_And_Base () : Takes number to be converted (N) and base value (B) from user. Base must be between 2 and 16.

II.	Convert_Number () :  Does the conversion


III.	Show_Converted_Number() : Displays the converted value.



Sample input(N,B)	Sample output
100     8	144
512     16	200
512     0	Base not within proper range!
*/
#include <stdio.h>

#define MAX_DIGITS 32


void Get_Number_And_Base(int *N, int *B) {
    printf("Enter number and base (2-16): ");
    scanf("%d %d", N, B);
    if (*B < 2 || *B > 16) {
        printf("Base not within proper range!\n");
    }
}


void Convert_Number(int N, int B, char result[]) {
    int index = 0;
    char digits[] = "0123456789ABCDEF";

    if (N == 0) {
        result[index++] = '0';
    } else {
        while (N > 0) {
            result[index++] = digits[N % B];
            N /= B;
        }
    }

    result[index] = '\0';


    for (int i = 0; i < index / 2; i++) {
        char temp = result[i];
        result[i] = result[index - i - 1];
        result[index - i - 1] = temp;
    }
}

void Show_Converted_Number(char result[]) {
    printf("%s\n", result);
}

int main() {
    int number, base;
    char converted[MAX_DIGITS];


    Get_Number_And_Base(&number, &base);


    if (base >= 2 && base <= 16) {
        Convert_Number(number, base, converted);
        Show_Converted_Number(converted);
    }

    return 0;
}
