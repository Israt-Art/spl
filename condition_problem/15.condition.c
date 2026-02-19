/*Program for “Guessing Game”:
Player-1 picks a number X and Player-2 has to guess that number within N = 3 tries. For each wrong guess by Player-2, the program prints “Wrong, N-1 Chance(s) Left!” If Player-2 successfully guesses the number, the program prints “Right, Player-2 wins!” and stops allowing further tries (if any left). Otherwise after the completion of N = 3 wrong tries, the program prints “Player-1 wins!” and halts.

[ Restriction: Without using loop/break/continue
 Hint: Use flag ]

Sample input
(X, n1, n2, n3) 	Sample output
5
12    8    5	Wrong, 2 Chance(s) Left!
Wrong, 1 Chance(s) Left!
Right, Player-2 wins!
100
50    100	Wrong, 2 Chance(s) Left!
Right, Player-2 wins!
20
12    8    5	Wrong, 2 Chance(s) Left!
Wrong, 1 Chance(s) Left!
Wrong, 0 Chance(s) Left!
Player-1 wins!

*/
#include <stdio.h>

int main()
{
    int X;
    int n1, n2, n3;
    int flag = 0;

    scanf("%d", &X);

    scanf("%d %d %d", &n1, &n2, &n3);


    if(flag == 0)
    {
        if(n1 == X)
        {
            printf("Right, Player-2 wins!\n");
            flag = 1;
        }
        else
            printf("Wrong, 2 Chance(s) Left!\n");
    }


    if(flag == 0)
    {
        if(n2 == X)
        {
            printf("Right, Player-2 wins!\n");
            flag = 1;
        }
        else
            printf("Wrong, 1 Chance(s) Left!\n");
    }


    if(flag == 0)
    {
        if(n3 == X)
        {
            printf("Right, Player-2 wins!\n");
            flag = 1;
        }
        else
        {
            printf("Wrong, 0 Chance(s) Left!\n");
            printf("Player-1 wins!\n");
        }
    }

    return 0;
}




