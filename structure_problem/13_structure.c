/*The Tigers have clinched a stunning victory over their rivals recently. In that series of three matches, some players put up some amazing performances. Now you have to create a structure named player where you have to store the following information of each player:
1. Player’s name
2. Player’s country
3. Array(size 3) to store runs of 3 matches
4. Array(size 3) to store wickets of 3 matches
5. Array(size 3) to store points of 3 matches
Count points using the following formula:
1. Each wicket = 12 points
2. Runs <=25 in a match = 5 points
3. 25< Runs<=50 in a match = 10 points
4. 50< Runs<=75 in a match = 15 points
5. 75< Runs in a match = 20 points
Now, take input of two players and calculate the points for each player for all the three matches. And also find man of the match(MOM) for each match based on their points and find out the man of the series on more points overall.

Sample Input	Sample Output
Shakib Al Hasan
Bangladesh
20
75
103
1
1
5

Tamim Iqbal
Bangladesh
100
109
17
0
0
0
 	Match 1:
Shakib Al Hasan points: 17
Tamim Iqbal points: 20
MOM : Tamim Iqbal
Match 2:
Shakib Al Hasan points: 27
Tamim Iqbal points: 20
MOM : Shakib Al Hasan

Match 3:
Shakib Al Hasan points: 80
Tamim Iqbal points: 5
MOM : Shakib Al Hasan

Man of the Series: Shakib Al Hasan
 */
 #include <stdio.h>
#include <string.h>

struct player
{
    char name[50];
    char country[50];
    int runs[3];
    int wickets[3];
    int points[3];
};


void calculatePoints(struct player *p)
{
    for(int i = 0; i < 3; i++)
    {
        int pt = 0;

        if(p->runs[i] <= 25)
            pt += 5;
        else if(p->runs[i] <= 50)
            pt += 10;
        else if(p->runs[i] <= 75)
            pt += 15;
        else
            pt += 20;

        pt += p->wickets[i] * 12;

        p->points[i] = pt;
    }
}


int totalPoints(struct player p)
{
    int sum = 0;
    for(int i = 0; i < 3; i++)
        sum += p.points[i];
    return sum;
}

int main()
{
    struct player p1, p2;


    fgets(p1.name, sizeof(p1.name), stdin);
    p1.name[strcspn(p1.name, "\n")] = 0;

    fgets(p1.country, sizeof(p1.country), stdin);
    p1.country[strcspn(p1.country, "\n")] = 0;

    for(int i = 0; i < 3; i++)
        scanf("%d", &p1.runs[i]);

    for(int i = 0; i < 3; i++)
        scanf("%d", &p1.wickets[i]);

    getchar();


    fgets(p2.name, sizeof(p2.name), stdin);
    p2.name[strcspn(p2.name, "\n")] = 0;

    fgets(p2.country, sizeof(p2.country), stdin);
    p2.country[strcspn(p2.country, "\n")] = 0;

    for(int i = 0; i < 3; i++)
        scanf("%d", &p2.runs[i]);

    for(int i = 0; i < 3; i++)
        scanf("%d", &p2.wickets[i]);

    calculatePoints(&p1);
    calculatePoints(&p2);


    for(int i = 0; i < 3; i++)
    {
        printf("Match %d:\n", i + 1);
        printf("%s points: %d\n", p1.name, p1.points[i]);
        printf("%s points: %d\n", p2.name, p2.points[i]);

        if(p1.points[i] >= p2.points[i])
            printf("MOM : %s\n", p1.name);
        else
            printf("MOM : %s\n", p2.name);

        printf("\n");
    }


    int total1 = totalPoints(p1);
    int total2 = totalPoints(p2);

    if(total1 >= total2)
        printf("Man of the Series: %s\n", p1.name);
    else
        printf("Man of the Series: %s\n", p2.name);

    return 0;
}
