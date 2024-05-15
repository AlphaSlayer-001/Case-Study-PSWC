#include "headers.h"

void add_new_student(std *students, int *n) {
    if (*n >= MAX_NO_STUDENTS) {
        printf("Cannot add more students. Maximum limit reached.\n");
        return;
    }

    int new_rno;
    printf("Enter roll number of the student: ");
    scanf("%d", &new_rno);

    // Check if the entered roll number already exists
    for (int i = 0; i < *n; i++) {
        if (students[i].rno == new_rno) {
            printf("Roll number %d already exists. Please enter a different roll number.\n", new_rno);
            return;
        }
    }

    system("cls");
    display_logo();
    // If roll number doesn't exist, proceed with adding the new student
    strcpy(students[*n].name, "");
    students[*n].rno = new_rno;

    printf("Enter name of the student: ");
    scanf("%s", students[*n].name);

    printf("Enter section of the student: ");
    scanf(" %c", &students[*n].sec);

    printf("Enter marks for Computer Science (ISA1, ISA2, ESA): ");
    scanf("%d %d %d", &students[*n].c[0], &students[*n].c[1], &students[*n].c[2]);

    printf("Enter marks for Physics (ISA1, ISA2, ESA): ");
    scanf("%d %d %d", &students[*n].phy[0], &students[*n].phy[1], &students[*n].phy[2]);

    printf("Enter marks for Mathematics (ISA1, ISA2, ESA): ");
    scanf("%d %d %d", &students[*n].math[0], &students[*n].math[1], &students[*n].math[2]);

    (*n)++;
    printf("Student added successfully.\n");
    printf("Press any key to continue...");
    getch();
}