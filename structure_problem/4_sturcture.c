/*4	Given a structure student, which has three member variables (name, id and cgpa), declare a variable of structure student. Display the value of the member variables.*/
#include <stdio.h>
#include <string.h>


struct Student {
    char name[50];
    char id[20];
    float cgpa;
};

int main() {

    struct Student s1;


    strcpy(s1.name, "John Doe");
    strcpy(s1.id, "CSE101");
    s1.cgpa = 3.75;


    printf("Student Details:\n");
    printf("Name: %s\n", s1.name);
    printf("ID: %s\n", s1.id);
    printf("CGPA: %.2f\n", s1.cgpa);

    return 0;
}
