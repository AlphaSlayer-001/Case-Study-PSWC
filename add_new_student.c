#include "header.h"

void add_new_student(struct student *students, int *no_students) {
    char r_no[7];
    clearScreen();
    display_design();

    //printf("no_students = %d\n", *no_students);
    printf("\t\t\t\tEnter the student's name: ");
    fgets(students[*no_students].name, sizeof(students[*no_students].name), stdin);
    whitespace(students[*no_students].name);

    printf("\t\t\t\tEnter the student's roll no (last 5 characters): ");
    fgets(r_no, sizeof(r_no), stdin);
    //whitespace(r_no); // Remove newline character and trim whitespace
    strncpy(students[*no_students].roll_no, r_no, sizeof(students[*no_students].roll_no));

    // input marks for subjects in isa_1
    printf("\t\t\t\tMarks in ISA1: \n");
    printf("\t\t\t\t\tEnter marks for PSWC (out of 50): ");
    scanf("%d", &students[*no_students].isa_1[0]);
    printf("\t\t\t\t\tEnter marks for Physics (out of 50): ");
    scanf("%d", &students[*no_students].isa_1[1]);
    printf("\t\t\t\t\tEnter marks for Mathematics (out of 50): ");
    scanf("%d", &students[*no_students].isa_1[2]);

    // input marks for subjects in isa_2
    printf("\t\t\t\tMarks in ISA2: \n");
    printf("\t\t\t\t\tEnter marks for PSWC (out of 50): ");
    scanf("%d", &students[*no_students].isa_2[0]);
    printf("\t\t\t\t\tEnter marks for Physics (out of 50): ");
    scanf("%d", &students[*no_students].isa_2[1]);
    printf("\t\t\t\t\tEnter marks for Mathematics (out of 50): ");
    scanf("%d", &students[*no_students].isa_2[2]);

    // input marks for subjects in esa
    printf("\t\t\t\tMarks in ESA: \n");
    printf("\t\t\t\t\tEnter marks for PSWC (out of 50): ");
    scanf("%d", &students[*no_students].esa[0]);
    printf("\t\t\t\t\tEnter marks for Physics (out of 50): ");
    scanf("%d", &students[*no_students].esa[1]);
    printf("\t\t\t\t\tEnter marks for Mathematics (out of 50): ");
    scanf("%d", &students[*no_students].esa[2]);

    // calculate total and grade for each subject
    for (int i = 0; i < 3; i++) {
        students[*no_students].total[i] = (students[*no_students].isa_1[i] + students[*no_students].isa_2[i]) / 2.0 + students[*no_students].esa[i] / 2.0;
        int t = students[*no_students].total[i];
        if (90.0 < t && t <= 100.0)
            students[*no_students].grade[i] = 'S';
        else if (80.0 < t && t <= 90.0)
            students[*no_students].grade[i] = 'A';
        else if (70.0 < t && t <= 80.0)
            students[*no_students].grade[i] = 'B';
        else if (60.0 < t && t <= 70.0)
            students[*no_students].grade[i] = 'C';
        else if (50.0 < t && t <= 60.0)
            students[*no_students].grade[i] = 'D';
        else if (35.0 < t && t <= 50.0)
            students[*no_students].grade[i] = 'E';
        else
            students[*no_students].grade[i] = 'F';
    }


    printf("\t\t\t\tPress any key to return..");
    clear_input_buffer();
    getchar();
    clearScreen();
}
