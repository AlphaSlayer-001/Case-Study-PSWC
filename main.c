#include "header.h"

int main(){
    struct student students[max_no_students];

    int choice = 0, no_students = 0;

    details(students, &no_students);
    do {
        display_design();
        // display menu
        printf("\n\t\t\t\tMenu:\n");
        printf("\t\t\t\t1. Print Grade Card\n");
        printf("\t\t\t\t2. Add New Student\n");
        printf("\t\t\t\t3. Update Marks\n");
        printf("\t\t\t\t4. Exit\n");
        printf("\t\t\t\tEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                char r_no[5];
                int size = 0;
                do{
                    printf("\t\t\t\tEnter the roll number of the student (last 5 characters): ");
                    scanf("%s", r_no);
                    size = str_size(r_no);
                } while(size != 5);
                print_grade_card(students, r_no, no_students);
                break;
            case 2:
                add_new_student(students, &no_students);
                break;
            case 3:
                //updateMarks(students, numStudents);
                break;
            case 4:
                printf("\t\t\t\tExiting program...\n");
                break;
            default:
                printf("\t\t\t\tInvalid choice! Please try again....\n\t\t\t\tPress any key to return..");
                clear_input_buffer();
                getchar();
                clearScreen();
        }
    } while (choice != 4); // looping until the user chooses to exit

    return 0;
}
