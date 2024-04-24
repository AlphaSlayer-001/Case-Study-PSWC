#include"header.h"

int main(){
    student s[10] = 
    {
        {"PES2UG23CS075", "Ankur Sharma", 'B', {42, 44, 47, 45, 43}, {46, 41, 48, 44, 42}, {93, 97, 91, 95, 99}},
        {"PES2UG23CS071", "Anirudh M", 'B', {46, 44, 40, 43, 45}, {47, 45, 48, 41, 42}, {92, 96, 93, 99, 90}},
        {"PES2UG23CS074", "Anish K", 'B', {44, 47, 41, 40, 45}, {40, 42, 48, 46, 43}, {99, 95, 94, 91, 93}},
        {"PES2UG23CS080", "Ansh J", 'B', {47, 42, 46, 41, 48}, {44, 45, 40, 43, 49}, {91, 95, 96, 93, 97}}
    };
    student *p = s;

    int choice = 0, num = 4;

    do{
        display();
        printf("\t\t\tGrade Card Menu\n");
        printf("\t\t\t1.Grade Card Print\n");
        printf("\t\t\t2.Update Marks\n");
        printf("\t\t\t3.Add Student Details\n");
        printf("\t\t\t4. Quit\n");
        printf("\t\t\t5. Clear screen\n");
        printf("\t\t\tEnter your choice: ");
        scanf("%d", &choice);
        switch (choice){
        case 1:
            char r_no[14];
            do{
                printf("\t\t\tEnter the roll number of the student (12 char): ");
                scanf("%s", r_no);
            }while(strlen(r_no) != 13);
            print_grade(p, r_no);
            break;
        case 2:
            char r_n[14];
            display();
            do{
                printf("\t\t\tEnter the roll number of the student (12 char): ");
                scanf("%s", r_n);
            }while(strlen(r_no) != 13);
            update(p, r_n);
            break;
        case 3:
            system("cls");
            display();
            add(p, &num);
            break;
        case 4:
            system("cls");
            return 0;
        case 5:
            system("cls");
            break;
        default:
            break;
        }
    }while(choice != 4);
}