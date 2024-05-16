#include "headers.h"

void grade_card(std **students, int n) {
    int r;
    printf("Enter the roll no of the student (between 1 and %d: \n", n);
    scanf("%d", &r); // Corrected the format specifier from %n to %d

    std *student = binary_search(students, n, r);
    if(student == NULL){
        printf("Student with roll no. %d is not found !\n", r);
        return;
    }

    system("cls");
    display_logo();
    printf("Name: %s\n", student->name);
    printf("Roll No: %d\n", student->rno);
    printf("Section: %c\n", student->sec);
    printf("---------------------------------------------------------\n");
    printf("Subject       ISA1  ISA2  ESA   Total Marks\n");
    printf("---------------------------------------------------------\n");

    int total[3];
    total[0] = (student->c[0] + student->c[1]) / 2 + student->c[2] / 2 + 10;
    total[1] = (student->phy[0] + student->phy[1]) / 2 + student->phy[2] / 2 + 10;
    total[2] = (student->math[0] + student->math[1]) / 2 + student->math[2] / 2 + 10;
    double grade[3];
    for(int i = 0; i < 3; i++){
        if(total[i] > 95 && total[i] <= 100)
            grade[i] = 10.0;
        else if(total[i] > 85 && total[i] <= 95)
            grade[i] = 9.5;
        else if(total[i] > 75 && total[i] <= 85)
            grade[i] = 8.5;
        else if(total[i] > 65 && total[i] <= 75)
            grade[i] = 7.5;
        else if(total[i] > 55 && total[i] <= 65)
            grade[i] = 6.5;
        else if(total[i] > 45 && total[i] <= 55)
            grade[i] = 5.5;
        else if(total[i] >= 35 && total[i] <= 45)
            grade[i] = 5.0;
        else
            grade[i] = 0.0;
    }

    double gpa = (5.0 * grade[0] + 5.0 * grade[1] + 4.0 * grade[2]) / 14.0;
    char total_grade;

    if (gpa >= 9.0) {
        total_grade = 'S';
    } else if (gpa >= 8.0) {
        total_grade = 'A';
    } else if (gpa >= 7.0) {
        total_grade = 'B';
    } else if (gpa >= 6.0) {
        total_grade = 'C';
    } else if (gpa >= 5.0) {
        total_grade = 'D';
    } else {
        total_grade = 'F';
    }

    printf("Computer Sci  %3d   %3d   %3d   %5d\n", student->c[0], student->c[1], student->c[2], total[0]);
    printf("Physics       %3d   %3d   %3d   %5d\n", student->phy[0], student->phy[1], student->phy[2], total[1]);
    printf("Mathematics   %3d   %3d   %3d   %5d\n", student->math[0], student->math[1], student->math[2], total[2]);
    printf("\n\nGPA       %.2f\n", (gpa > 0) ? gpa : 0);
    printf("Grade         %c\n", total_grade);
    printf("---------------------------------------------------------\n");
    printf("Press any key to continue...");
    getch();
}
