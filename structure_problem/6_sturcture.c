/*Given a structure student, which has three member variables (name, id and cgpa), declare a variable of structure student. Populate the member variables from the keyboard.*/
#include <stdio.h>


struct Student {
    char name[50];
    char id[20];
    float cgpa;
};

int main() {
    struct Student s1;


    printf("Enter student name: ");
    fgets(s1.name, sizeof(s1.name), stdin);


    size_t len = 0;
    while (s1.name[len] != '\0') {
        if (s1.name[len] == '\n') {
            s1.name[len] = '\0';
            break;
        }
        len++;
    }

    printf("Enter student ID: ");
    scanf("%19s", s1.id);

    printf("Enter student CGPA: ");
    scanf("%f", &s1.cgpa);


    printf("\nStudent Details:\n");
    printf("Name: %s\n", s1.name);
    printf("ID: %s\n", s1.id);
    printf("CGPA: %.2f\n", s1.cgpa);

    return 0;
}
