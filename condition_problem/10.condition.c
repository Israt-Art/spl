/*Program that will evaluate simple expressions of the form-

<number1>   <operator>   <number2>

; where operators are (+, - , *, /)

And if the operator is “/”, then check if <number2> nonzero or not.

Sample input 	Sample output
100     *      55.5	Multiplication:  5550
100     /      -5.5	Division:   -18.181818
100    /        0	Division:    Zero as divisor is not valid!*/

#include <stdio.h>

int main()
{
    double num1, num2;
    char op;


    scanf("%lf %c %lf", &num1, &op, &num2);

    switch(op)
    {
        case '+':
            printf("Addition: %.6lf", num1 + num2);
            break;
        case '-':
            printf("Subtraction: %.6lf", num1 - num2);
            break;
        case '*':
            printf("Multiplication: %.6lf", num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("Division: %.6lf", num1 / num2);
            else
                printf("Division: Zero as divisor is not valid!");
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}





