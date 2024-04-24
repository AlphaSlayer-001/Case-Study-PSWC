#include"header.h"

void update(student *s, char r_n[14]){
    display();
    system("cls");

    int choice = 0, c2 = 0;
    int i;
    for(i = 0; strcmp(r_n, s[i].roll) != 0; i++);


    printf("\t\t\t1.Subject 1\n");
    printf("\t\t\t2.Subject 2\n");
    printf("\t\t\t3.Subject 3\n");
    printf("\t\t\t4.Subject 3\n");
    printf("\t\t\t5.Subject 3\n");
    printf("\t\t\t5. Quit\n\n");
    printf("\t\t\tEnter your choice: ");
    scanf("%d", &choice);
    if(choice == 5){
        system("cls");
        return;
    }
    if(choice > 5 || choice < 1){
        printf("Wrong choice !\n");
        sleep(2);
        system("cls");
        return;
    }

    system("cls");
    printf("\t\t\t1.ISA1\n");
    printf("\t\t\t2.ISA2\n");
    printf("\t\t\t3.ESA\n");
    printf("\t\t\t4. Quit\n\n");
    printf("\t\t\tEnter your choice: ");
    scanf("%d", &c2);
    if(c2 == 4){
        system("cls");
        return;
    }

    switch(c2){
        case 1:
            printf("Present marks: %d\nNew marks: ", s[i].isa1[choice - 1]);
            scanf("%d", &s[i].isa1[choice - 1]);
        system("cls");
            break;;
        case 2:
            printf("Present marks: %d\nNew marks: ", s[i].isa2[choice - 1]);
            scanf("%d", &s[i].isa2[choice - 1]);
        system("cls");
            break;
        case 3:
            printf("Present marks: %d\nNew marks: ", s[i].isa1[choice - 1]);
            scanf("%d", &s[i].esa[choice - 1]);
        system("cls");
            break;
        case 4:
            printf("Quitting the menu..\n");
            sleep(2);
        system("cls");
            break;
        default:
            printf("Wrong choice !\n");
            sleep(2);
            system("cls");
            break;
    }
}