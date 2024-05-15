#include "headers.h"

int main(void) {
    int choice, num_s;

    FILE *fp = fopen("data.csv", "r");
    if(fp == NULL) {
        printf("Cannot open the file !\n");
        return 1;
    }

    std students[MAX_NO_STUDENTS]; // Max no of students is 100
    num_s = read(fp, students); // To read data into the struct array

    char buffer[1024]; // Buffer to store each line read from the file
    std **ptrs;

    // Menu
    do {
        // Sorting
        ptrs = (std **)malloc(num_s * sizeof(std *));
        if (ptrs == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }
        // To initialize the pointers to point to the elements of the students array
        for (int i = 0; i < num_s; i++) {
            ptrs[i] = &students[i];
        }
        // To call bubble sort with the array of pointers
        bubble_sort(ptrs, num_s);
        system("cls");
        display_logo();
        printf("\nMenu:\n");
        printf("1. Display grade card\n");
        printf("2. Update marks\n");
        printf("3. Add new student\n");
        printf("4. Delete a student\n");
        printf("5. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                grade_card(ptrs, num_s);
                break;
            case 2:
                update_marks(ptrs, num_s);
                break;
            case 3:
                add_new_student(students, &num_s);
                break;
            case 4:
                delete_student(students, &num_s);
                break;
            case 5:
                printf("Press any key to exit...");
                getch();
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
    } while(choice != 5);

    fclose(fp);
    fp = fopen("data.csv", "w");
    write(fp, students, num_s);
    free(ptrs);
    fclose(fp);
}