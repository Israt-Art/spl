/*Program that will check whether a triangle is valid or not, when the three angles (angle value should be such that, 0 < value < 180) of the triangle are entered through the keyboard.
[Hint: A triangle is valid if the sum of all the three angles is equal to 180 degrees.] */




#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a > 0 && a < 180 && b > 0 && b < 180 && c > 0 && c < 180 &&
       (a + b + c) == 180)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}

