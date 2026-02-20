/*5	Given a structure student, which has three member variables (name, id and cgpa), declare a variable of structure student. Assign values to the member variables.*/
#include <stdio.h>
#include <string.h>


struct Student {
    char name[50];
    char id[20];
    float cgpa;
};

int main() {

    struct Student s1;


    strcpy(s1.name, "Alice Smith");
    strcpy(s1.id, "CSE102");
    s1.cgpa = 3.85;

    // Display the values
    printf("Student Details:\n");
    printf("Name: %s\n", s1.name);
    printf("ID: %s\n", s1.id);
    printf("CGPA: %.2f\n", s1.cgpa);

    return 0;
}
