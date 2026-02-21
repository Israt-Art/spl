/*1.		WAP that will calculate the length of the string using pointers.
*/
#include <stdio.h>

int strLength(char *p)
{
    int len = 0;

    while(*p != '\0')
    {
        if(*p != '\n')
            len++;

        p++;
    }

    return len;
}

int main()
{
    char str[100];
    int length;

    fgets(str, sizeof(str), stdin);

    length = strLength(str);

    printf("%d", length);

    return 0;
}
