/*Declare a structure of students with three member variables (name, id and cgpa), where name is a string and id are strings, and cgpa is a float value with default values.*/
#include <stdio.h>

struct Student {
    char name[50];
    char id[20];
    float cgpa;
};

int main() {

    struct Student s1 = {"John Doe", "CSE101", 3.75};


    printf("Student Details (Default Values):\n");
    printf("Name: %s\n", s1.name);
    printf("ID: %s\n", s1.id);
    printf("CGPA: %.2f\n", s1.cgpa);

    return 0;
}
