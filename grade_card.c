#include "header.h"

void print_grade_card(int no_students, struct student *students, char *r_no) {
    clearScreen();
    display_design();
    int found = 0;
    for (int i = 0; i < no_students; i++) {
        //printf("%s\n", students[i].roll_no);
        if (strcmp(students[i].roll_no, r_no) == 0) {
            // student found, print grade card
            printf("\n\t\t\t\tName: %s\n", students[i].name);
            printf("\t\t\t\tRoll No: %s\n", students[i].roll_no);
            printf("\t\t\t\tMarks in ISA1: \n\t\t\t\t\tPSWC: %d \n\t\t\t\t\tPhysics: %d \n\t\t\t\t\tMathematics: %d\n", students[i].isa_1[0], students[i].isa_1[1], students[i].isa_1[2]);
            printf("\t\t\t\tMarks in ISA2: \n\t\t\t\t\tPSWC: %d \n\t\t\t\t\tPhysics: %d \n\t\t\t\t\tMathematics: %d\n", students[i].isa_2[0], students[i].isa_2[1], students[i].isa_2[2]);
            printf("\t\t\t\tMarks in ESA: \n\t\t\t\t\tPSWC: %d \n\t\t\t\t\tPhysics: %d \n\t\t\t\t\tMathematics: %d\n", students[i].esa[0], students[i].esa[1], students[i].esa[2]);
            printf("\t\t\t\tTotal marks: \n\t\t\t\t\tPSWC: %.0f \n\t\t\t\t\tPhysics: %.0f \n\t\t\t\t\tMathematics: %.0f\n", students[i].total[0], students[i].total[1], students[i].total[2]);
            printf("\t\t\t\tGrade in PSWC: %c\n", students[i].grade[0]);
            printf("\t\t\t\tGrade in Physics: %c\n", students[i].grade[1]);
            printf("\t\t\t\tGrade in Mathematics: %c\n", students[i].grade[2]);
            found = 1;
            break;
        }
    }

    // if the student with the entered roll number is not found
    if (!found) {
        printf("\t\t\t\tStudent with roll number %s not found.\n", r_no);
    }

    printf("\t\t\t\tPress any key to return..");
    clear_input_buffer();
    clearScreen();
}

