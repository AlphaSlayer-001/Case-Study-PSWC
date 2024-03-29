#include "header.h"

void print_grade_card(struct student *students, char *r_no, int no_students){
    clearScreen();
    display_design();
    int i;
    // to find the student with the specified roll number
    for (i = 0; i < no_students; i++) {
        printf("%s\n", students[i].roll_no);
        if (strcmp(students[i].roll_no, r_no) == 0) {
            break; // student found
        }
    }
    sleep(10);
    // check if student with the specified roll number was found
    if (i == no_students) {
        printf("\t\t\t\t\t   Student with roll number %s not found.\n", r_no);
        clear_input_buffer();
        printf("\t\t\t\t\t   Press any key to return..\n");
        getchar();
        clearScreen();
        return;
    }
    // print grade card for the found student
    printf("\t\t\t\t\t\tGrade Card for Student with Roll Number: %s\n", r_no);
    printf("\t\t\t\t\t\tName: %s\n", students[i].name);
    printf("\t\t\t\t\t\tPSWC: %d\n\tGrade: %c\n", students[i].isa_1[0], students[i].grade[0]);
    printf("\t\t\t\t\t\tPhysics: %d\n\tGrade: %c\n", students[i].isa_1[1], students[i].grade[1]);
    printf("\t\t\t\t\t\tMathematics: %d\n\tGrade: %c\n", students[i].isa_1[2], students[i].grade[2]);
    clear_input_buffer();
    printf("\t\t\t\t\t\tPress any key to return..\n");
    getchar();
    clearScreen();
}
