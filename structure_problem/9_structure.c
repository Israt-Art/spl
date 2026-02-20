/*Declare a structure of students with three variables (name, id and cgpa). Now take the input of two students and print the information of that student who has better cgpa with a function.
Sample Input	Sample Output
Shakib Al Hasan
101
3.5
Tamim Iqbal
102
2.7	Shakib Al Hasan
101
3.5
*/
#include <stdio.h>
#include <string.h>


struct Student {
    char name[50];
    char id[20];
    float cgpa;
};


struct Student better_student(struct Student s1, struct Student s2) {
    return (s1.cgpa >= s2.cgpa) ? s1 : s2;
}

int main() {
    struct Student s1, s2, top;


    printf("Enter name of first student: ");
    getchar();
    fgets(s1.name, sizeof(s1.name), stdin);

    s1.name[strcspn(s1.name, "\n")] = '\0';

    printf("Enter ID of first student: ");
    scanf("%19s", s1.id);

    printf("Enter CGPA of first student: ");
    scanf("%f", &s1.cgpa);

    printf("Enter name of second student: ");
    getchar();
    fgets(s2.name, sizeof(s2.name), stdin);
    s2.name[strcspn(s2.name, "\n")] = '\0';

    printf("Enter ID of second student: ");
    scanf("%19s", s2.id);

    printf("Enter CGPA of second student: ");
    scanf("%f", &s2.cgpa);


    top = better_student(s1, s2);


    printf("\nStudent with better CGPA:\n");
    printf("%s\n", top.name);
    printf("%s\n", top.id);
    printf("%.1f\n", top.cgpa);

    return 0;
}
