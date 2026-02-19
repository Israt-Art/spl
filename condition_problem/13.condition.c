/* Program that will construct a menu for performing arithmetic operations. The user will give two real numbers (a, b) on which the arithmetic operations will be performed and an integer number (1 <= Choice <= 4) as a choice. Choice-1, 2, 3, 4 are for performing addition, subtraction, multiplication, division respectively.

If Choice-4 is selected, again the program will ask for another choice (1 <= Case <=2), where Case-1, 2 evaluate quotient and reminder respectively.


Sample input	Sample output
5     10
3	Multiplication: 50
*/

#include <stdio.h>

int main()
{
    double a, b;
    int choice;


    scanf("%lf %lf", &a, &b);

    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Addition: %.6lf", a + b);
            break;
        case 2:
            printf("Subtraction: %.6lf", a - b);
            break;
        case 3:
            printf("Multiplication: %.6lf", a * b);
            break;
        case 4:
            if(b == 0)
            {
                printf("Division by zero not allowed!");
                break;
            }

            int subchoice;
            scanf("%d", &subchoice);

            if(subchoice == 1)
                printf("Quotient: %d", (int)(a / b));
            else if(subchoice == 2)
                printf("Reminder: %d", (int)a % (int)b);
            else
                printf("Invalid case choice");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
















