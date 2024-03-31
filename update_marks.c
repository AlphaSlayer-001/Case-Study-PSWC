#include "header.h"

void update_marks(struct student *students, int no_students){
    char r_no[5];
    clearScreen();
    display_design();
    int size = 0, found = 0, choice, choice1;
    do{
        printf("\t\t\t\tEnter the roll number of the student (last 5 characters): ");
        scanf("%s", r_no);
        size = str_size(r_no);
    } while(size != 5);

    for (int i = 0; i <= no_students; i++) {
        if (strcmp(students[i].roll_no, r_no) == 0) {
            // student found, update marks
            found = 1;

            do{
                clearScreen();
                display_design();
                printf("\n\t\t\t\tMenu:\n");
                printf("\t\t\t\t1. Update marks of ISA1\n");
                printf("\t\t\t\t2. Update marks of ISA2\n");
                printf("\t\t\t\t3. Update marks of ESA\n");
                printf("\t\t\t\t4. Exit\n");
                printf("\t\t\t\tEnter your choice: ");
                scanf("%d", &choice);
                clear_input_buffer();

                switch(choice){
                    case 1:{
                        do{
                            clearScreen();
                            display_design();
                            printf("\n\t\t\t\tMenu:\n");
                            printf("\t\t\t\t1. Update marks of PWSC\n");
                            printf("\t\t\t\t2. Update marks of Physics\n");
                            printf("\t\t\t\t3. Update marks of Mathematics\n");
                            printf("\t\t\t\t4. Exit\n");
                            printf("\t\t\t\tEnter your choice: ");
                            scanf("%d", &choice1);
                            clear_input_buffer();

                            switch(choice1){
                                case 1:{
                                    printf("\t\t\t\tOriginal marks: %d\n", students[i].isa_1[0]);
                                    printf("\t\t\t\tEnter the updated marks: ");
                                    scanf("%d", &students[i].isa_1[0]);
                                    break;
                                }
                                case 2:{
                                    printf("\t\t\t\tOriginal marks: %d\n", students[i].isa_1[1]);
                                    printf("\t\t\t\tEnter the updated marks: ");
                                    scanf("%d", &students[i].isa_1[1]);
                                    break;
                                }
                                case 3:{

                                    printf("\t\t\t\tOriginal marks: %d\n", students[i].isa_1[2]);
                                    printf("\t\t\t\tEnter the updated marks: ");
                                    scanf("%d", &students[i].isa_1[2]);
                                    break;
                                }
                                case 4:{
                                    printf("Exiting...\n");
                                    break;
                                }
                                default:{
                                    printf("\t\t\t\tInvalid choice! Please try again....\n\t\t\t\tPress any key to return..");
                                    clear_input_buffer();
                                    getchar();
                                    clearScreen();
                                }
                            }
                        } while(choice1 != 4);
                        break;
                    }
                    case 2:{
                        do{
                            clearScreen();
                            display_design();
                            printf("\n\t\t\t\tMenu:\n");
                            printf("\t\t\t\t1. Update marks of PWSC\n");
                            printf("\t\t\t\t2. Update marks of Physics\n");
                            printf("\t\t\t\t3. Update marks of Mathematics\n");
                            printf("\t\t\t\t4. Exit\n");
                            printf("\t\t\t\tEnter your choice: ");
                            scanf("%d", &choice1);
                            clear_input_buffer();

                            switch(choice1){
                                case 1:{
                                    printf("\t\t\t\tOriginal marks: %d\n", students[i].isa_2[0]);
                                    printf("\t\t\t\tEnter the updated marks: ");
                                    scanf("%d", &students[i].isa_2[0]);
                                    break;
                                }
                                case 2:{
                                    printf("\t\t\t\tOriginal marks: %d\n", students[i].isa_2[1]);
                                    printf("\t\t\t\tEnter the updated marks: ");
                                    scanf("%d", &students[i].isa_2[1]);
                                    break;
                                }
                                case 3:{
                                    printf("\t\t\t\tOriginal marks: %d\n", students[i].isa_2[2]);
                                    printf("\t\t\t\tEnter the updated marks: ");
                                    scanf("%d", &students[i].isa_2[2]);
                                    break;
                                }
                                case 4:{
                                    printf("Exiting...\n");
                                    break;
                                }
                                default:{
                                    printf("\t\t\t\tInvalid choice! Please try again....\n\t\t\t\tPress any key to return..");
                                    clear_input_buffer();
                                    getchar();
                                    clearScreen();
                                }
                            }
                        } while(choice1 != 4);
                        break;
                    }
                    case 3:{
                        do{
                            clearScreen();
                            display_design();
                            printf("\n\t\t\t\tMenu:\n");
                            printf("\t\t\t\t1. Update marks of PWSC\n");
                            printf("\t\t\t\t2. Update marks of Physics\n");
                            printf("\t\t\t\t3. Update marks of Mathematics\n");
                            printf("\t\t\t\t4. Exit\n");
                            printf("\t\t\t\tEnter your choice: ");
                            scanf("%d", &choice1);
                            clear_input_buffer();

                            switch(choice1){
                                case 1:{
                                    printf("\t\t\t\tOriginal marks: %d\n", students[i].esa[0]);
                                    printf("\t\t\t\tEnter the updated marks: ");
                                    scanf("%d", &students[i].esa[0]);
                                    break;
                                }
                                case 2:{
                                    printf("\t\t\t\tOriginal marks: %d\n", students[i].esa[1]);
                                    printf("\t\t\t\tEnter the updated marks: ");
                                    scanf("%d", &students[i].esa[1]);
                                    break;
                                }
                                case 3:{
                                    printf("\t\t\t\tOriginal marks: %d\n", students[i].esa[2]);
                                    printf("\t\t\t\tEnter the updated marks: ");
                                    scanf("%d", &students[i].esa[2]);
                                    break;
                                }
                                case 4:{
                                    printf("Exiting...\n");
                                    break;
                                }
                                default:{
                                    printf("\t\t\t\tInvalid choice! Please try again....\n\t\t\t\tPress any key to return..");
                                    clear_input_buffer();
                                    getchar();
                                    clearScreen();
                                }
                            }
                        } while(choice1 != 4);
                        break;
                    }
                    case 4:{
                        break;
                    }
                    default:{
                        printf("\t\t\t\tInvalid choice! Please try again....\n\t\t\t\tPress any key to return..");
                        clear_input_buffer();
                        clearScreen();
                    }
                }
                for (int j = 0; j < 3; j++) {
                    students[i].total[j] = (students[i].isa_1[j] + students[i].isa_2[j]) / 2.0 + students[i].esa[j] / 2.0;
                    float t = students[i].total[j];

                    if (90.0 < t && t <= 100.0)
                        students[i].grade[j] = 'S';
                    else if (80.0 < t && t <= 90.0)
                        students[i].grade[j] = 'A';
                    else if (70.0 < t && t <= 80.0)
                        students[i].grade[j] = 'B';
                    else if (60.0 < t && t <= 70.0)
                        students[i].grade[j] = 'C';
                    else if (50.0 < t && t <= 60.0)
                        students[i].grade[j] = 'D';
                    else if (35.0 < t && t <= 50.0)
                        students[i].grade[j] = 'E';
                    else
                        students[i].grade[j] = 'F';
            }
        } while(choice != 4);
        printf("\t\t\t\tMarks updated successfully for student with roll number %s.\n", r_no);
        break;
     }
   }
   if (!found) {
        printf("\t\t\t\tStudent with roll number %s not found.\n", r_no);
    }

    printf("\t\t\t\tPress any key to return..");
    clear_input_buffer();
    getchar();
    clearScreen();
}
