#include"header.h"

void print_grade(student *s, char r_no[14]){

    int i;
    float final_marks[5], gp[5], gpa;
    // space(3);

    for(i = 0; strcmp(r_no, s[i].roll) != 0; i++){
        if(i >= 9){
        printf("\t\t\tNot found !\n");
        return;
    }
    }

    printf("\n\n\n\t\t\tThe name of the student is %s\n", s[i].name);
    printf("\t\t\tThe sec of the student is %c\n", s[i].sec);

    printf("\t\t\tThe marks of the student in ISA1:\n");
    for(int j = 0; j < 5; j++){
        printf("\t\t\t\t\tSubject %d:- %d\n", j + 1, s[i].isa1[j]);
    }

    printf("\t\t\tThe marks of the student in ISA2:\n");
    for(int j = 0; j < 5; j++){
        printf("\t\t\t\t\tSubject %d:- %d\n", j + 1, s[i].isa2[j]);
    }  

    printf("\t\t\tThe marks of the student in ESA:\n");
    for(int j = 0; j < 5; j++){
        printf("\t\t\t\t\tSubject %d:- %d\n", j + 1, s[i].esa[j]);
    }

    for(int j = 0; j < 5; j++){
        final_marks[j] = (float)((s[i].isa1[j] + s[i].isa2[j]) / 2) + (float)(s[i].esa[j] / 2);
    } 
    printf("\t\t\tThe final marks of the student:\n");
    for(int j = 0; j < 5; j++){
        printf("\t\t\t\t\tSubject %d:- %.2f\n", j + 1, final_marks[j]);
    }

    printf("\t\t\tThe grades of the student:\n");
    for(int j = 0; j < 5; j++){
        if(final_marks[j] > 90 && final_marks[j] <= 100){
            printf("\t\t\t\t\tSubject %d:- %c\n", j + 1, 'S');
            gp[j] = 10.0;
        }
        else if(final_marks[j] > 80 && final_marks[j] <= 90){
            printf("\t\t\t\t\tSubject %d:- %c\n", j + 1, 'A');
            gp[j] = 9.0;
        }
        else if(final_marks[j] > 70 && final_marks[j] <= 80){
            printf("\t\t\t\t\tSubject %d:- %c\n", j + 1, 'B');
            gp[j] = 8.0;
        }
        else if(final_marks[j] > 60 && final_marks[j] <= 70){
            printf("\t\t\t\t\tSubject %d:- %c\n", j + 1, 'C');
            gp[j] = 7.0;    
        }
        else if(final_marks[j] > 50 && final_marks[j] <= 60){
            printf("\t\t\t\t\tSubject %d:- %c\n", j + 1, 'D');
            gp[j] = 6.0;
        }
        else if(final_marks[j] > 35 && final_marks[j] <= 50){
            printf("\t\t\t\t\tSubject %d:- %c\n", j + 1, 'E');
            gp[j] = 5.0;
        }
        else{
            printf("\t\t\t\t\tSubject %d:- %c\n", j + 1, 'F');
            gp[j] = 0.0;
        }
    }

    gpa = (5 * gp[0] + 5 * gp[1] + 4 * gp[2] + 4* gp[3] + 3 * gp[4]) / 21.0 ;
    printf("\t\t\tThe gpa of the student is %.2f\n", gpa);

}