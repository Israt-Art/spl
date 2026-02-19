/*1.		Write a program (WAP) that will find the grade of N students. For each student, it will take the marks of his/her attendance (on 5 marks), assignment (on 10 marks), class test (on 15 marks), midterm (on 50 marks), term final (on 100 marks). Then based on the tables shown below, the program will output his grade.


Attendance (A)	 5%
Assignments (HW)	10%
Class Tests  (CT)	15%
Midterm (MT)	30%
Final (TF)	40%

Marks	Letter Grade	Marks	Letter Grade	Marks	Letter Grade
90-100	A 	70-73	C+ 	 Less than 55	F
86-89	A- 	66-69	C
82-85	B+ 	62-65	C-
78-81	B 	58-61	D+
74-77	B- 	55-57	D


Sample input (A,HW,CT,MT,TF)	Sample output
2
5     10      15      44.5     92.5
0     7.5       5       20        55.5	Student 1 : A
Student 2 : F


*/

#include <stdio.h>

int main()
{
    int N, i;
    double A, HW, CT, MT, TF;
    double total;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        scanf("%lf %lf %lf %lf %lf", &A, &HW, &CT, &MT, &TF);


        total = (A / 5.0) * 5.0
              + (HW / 10.0) * 10.0
              + (CT / 15.0) * 15.0
              + (MT / 50.0) * 30.0
              + (TF / 100.0) * 40.0;

        printf("Student %d : ", i);

        if (total >= 90)
        printf("A\n");

        else if (total >= 86)
        printf("A-\n");

        else if (total >= 82)
        printf("B+\n");

        else if (total >= 78)
        printf("B\n");

        else if (total >= 74)
        printf("B-\n");

        else if (total >= 70)
        printf("C+\n");

        else if (total >= 66)
        printf("C\n");

        else if (total >= 62)
        printf("C-\n");

        else if (total >= 58)
        printf("D+\n");

        else if (total >= 55)
        printf("D\n");

        else
        printf("F\n");
    }

    return 0;
}

