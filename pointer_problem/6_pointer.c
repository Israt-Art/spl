/*WAP that will count the number of vowels and consonants in a string using pointer.

*/
#include <stdio.h>

void countVC(char *p, int *v, int *c)
{
    *v = 0;
    *c = 0;

    while (*p != '\0')
    {
        char ch = *p;

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                (*v)++;
            else
                (*c)++;
        }

        p++;
    }
}

int main()
{
    char str[200];
    int vowel, consonant;

    fgets(str, sizeof(str), stdin);

    countVC(str, &vowel, &consonant);

    printf("Vowels: %d\nConsonants: %d", vowel, consonant);

    return 0;
}
