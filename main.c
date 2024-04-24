#include "header.h"

int main(){
    struct student students[max_no_students];

    int choice = 0, no_students = 5, temp;

    details(students, &no_students);
    temp = no_students;
    do {
        clearScreen();
        display_design();

        // display menu
        printf("\n\t\t\t\tMenu:\n");
        printf("\t\t\t\t1. Print Grade Card\n");
        printf("\t\t\t\t2. Add New Student\n");
        printf("\t\t\t\t3. Update Marks\n");
        printf("\t\t\t\t4. Exit\n");
        printf("\t\t\t\tEnter your choice: ");
        scanf("%d", &choice);
        clear_input_buffer();

        switch (choice) {
            case 1:{
                clearScreen();
                display_design();
                char r_no[5];
                int size = 0;
                printf("\t\t\t\tThe available roll numbers are: \n");
                for(int i = 0; i < no_students; i++){
                    printf("\t\t\t\t\t%d.%s\n", i + 1, students[i].roll_no);
                }
                do{
                    printf("\t\t\t\tEnter the roll number of the student (last 5 characters): ");
                    scanf("%s", r_no);
                    size = str_size(r_no);
                } while(size != 5);
                clear_input_buffer();
                print_grade_card(no_students, students, r_no);
                break;
            }
            case 2:{
                printf("\t\t\t\tPress any key to continue..");
                clear_input_buffer();
                add_new_student(students, &temp);
                no_students++;
                break;
            }
            case 3:{
                update_marks(students, temp);
                break;
            }
            case 4:{
                printf("\t\t\t\tExiting program...\n");
                clearScreen();
                display_design();
                sleep(2);
                printf("\t\t\t\t\t\t\t*****THANK YOU*****");
                break;
            }
            default:{
                printf("\t\t\t\tInvalid choice! Please try again....\n\t\t\t\tPress any key to return..");
                clear_input_buffer();
                getchar();
                clearScreen();
            }
        }
    } while (choice != 4); // looping until the user chooses to exit

    return 0;
}
