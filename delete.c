#include "headers.h"

void delete_student(std *students, int *n) {
    system("cls");
    display_logo();
    int i, r_no, found = 0; 
    printf("Enter roll number of the student: ");
    scanf("%d", &r_no);

    for (i = 0; i < *n; i++) {
        if (students[i].rno == r_no) {
            found = 1;
            break;
        }
    }
    if (found) {
        for (int j = i; j < *n - 1; j++) {
            students[j] = students[j + 1];
        }
        (*n)--;
        printf("Student with roll number %d deleted successfully.\n", r_no);
    } else {
        printf("Student with roll number %d not found.\n", r_no);
    }
    printf("Press any key to continue...");
    getch();
    return;
}
