/*1.		Write a program (WAP) that will run and show keyboard inputs until the user types an ’A’ at the keyboard.
Sample input	Sample output
X
1
a
A	Input 1: X
Input 2: 1
Input 3: a

*/

#include <stdio.h>

int main()
{
    char ch;
    int count = 1;

    while (1)
    {
        scanf(" %c", &ch);

        if (ch == 'A')
            break;

        printf("Input %d: %c\n", count, ch);
        count++;
    }

    return 0;
}

