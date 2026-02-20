/*7	Declare a structure of students with three variables (name, id and cgpa). Take information of two students as input and show the output.

Sample Input	Sample Output
Shakib Al Hasan
101
3.5
Tamim Iqbal
102
2.7	Shakib Al Hasan
101
3.5
Tamim Iqbal
102
2.7

*/
#include <stdio.h>


struct Student {
    char name[50];
    char id[20];
    float cgpa;
};

int main() {
    struct Student students[2];


    for (int i = 0; i < 2; i++) {
        printf("Enter name of student %d: ", i + 1);
        getchar();
        fgets(students[i].name, sizeof(students[i].name), stdin);


        int len = 0;
        while (students[i].name[len] != '\0') {
            if (students[i].name[len] == '\n') {
                students[i].name[len] = '\0';
                break;
            }
            len++;
        }

        printf("Enter ID of student %d: ", i + 1);
        scanf("%19s", students[i].id);

        printf("Enter CGPA of student %d: ", i + 1);
        scanf("%f", &students[i].cgpa);
    }


    printf("\nStudent Information:\n");
    for (int i = 0; i < 2; i++) {
        printf("%s\n", students[i].name);
        printf("%s\n", students[i].id);
        printf("%.1f\n", students[i].cgpa);
    }

    return 0;
}
