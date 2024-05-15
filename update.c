#include "headers.h"

void update_marks(std **students, int n) {
    int r;
    printf("Enter the roll no of the student: ");
    scanf("%d", &r);

    std *student = binary_search(students, n, r);
    if(student == NULL){
        printf("Student with roll no. %d is not found !\n", r);
        return;
    }

    system("cls");
    display_logo();
    int subject;
    printf("Select the subject to update marks (1: Computer Science, 2: Physics, 3: Mathematics): ");
    scanf("%d", &subject);
    if (subject < 1 || subject > 3) {
        printf("Invalid subject selection!\n");
        return;
    }

    int exam;
    printf("Select the exam to update marks (1: ISA1, 2: ISA2, 3: ESA): ");
    scanf("%d", &exam);
    if (exam < 1 || exam > 3) {
        printf("Invalid exam selection!\n");
        return;
    }

    int *marks;
    switch (subject) {
        case 1:
            marks = student->c;
            break;
        case 2:
            marks = student->phy;
            break;
        case 3:
            marks = student->math;
            break;
        default:
            printf("Invalid subject selection!\n");
            return;
    }

    printf("Enter updated marks for selected exam: ");
    scanf("%d", &marks[exam - 1]);

    printf("Marks updated successfully for student with roll no. %d.\n", r);
    printf("Press any key to continue...");
    getch();
}