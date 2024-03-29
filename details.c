#include "header.h"

void details(struct student *students, int *no_students){
    // Student 1
    strcpy(students[0].name, "Anirudh");
    strcpy(students[0].roll_no, "CS072");
    //isa1
    students[0].isa_1[0] = 49;
    students[0].isa_1[1] = 48;
    students[0].isa_1[2] = 46;
    //isa2
    students[0].isa_2[0] = 45;
    students[0].isa_2[1] = 42;
    students[0].isa_2[2] = 48;
    //esa
    students[0].esa[0] = 95;
    students[0].esa[1] = 92;
    students[0].esa[2] = 98;
    //grade
    students[0].total[0] = (students[0].isa_1[0] + students[0].isa_2[0]) /2.0 + students[0].esa[0] / 2.0; //c
    students[0].grade[0] = 'S';
    students[0].total[1] = (students[0].isa_1[1] + students[0].isa_2[1]) /2.0 + students[0].esa[1] / 2.0; //physics
    students[0].grade[1] = 'S';
    students[0].total[2] = (students[0].isa_1[2] + students[0].isa_2[2]) /2.0 + students[0].esa[2] / 2.0; //math
    students[0].grade[2] = 'S';

    // Student 2
    strcpy(students[1].name, "Ankur");
    strcpy(students[1].roll_no, "CS077");
    //isa1
    students[1].isa_1[0] = 45;
    students[1].isa_1[1] = 50;
    students[1].isa_1[2] = 48;
    //isa2
    students[1].isa_2[0] = 43;
    students[1].isa_2[1] = 49;
    students[1].isa_2[2] = 50;
    //esa
    students[1].esa[0] = 93;
    students[1].esa[1] = 99;
    students[1].esa[2] = 100;
    //grade
    students[1].total[0] = (students[1].isa_1[0] + students[1].isa_2[0]) /2.0 + students[1].esa[0] / 2.0; //c
    students[1].grade[0] = 'S';
    students[1].total[1] = (students[1].isa_1[1] + students[1].isa_2[1]) /2.0 + students[1].esa[1] / 2.0; //physics
    students[1].grade[1] = 'S';
    students[1].total[2] = (students[1].isa_1[2] + students[1].isa_2[2]) /2.0 + students[1].esa[2] / 2.0; //math
    students[1].grade[2] = 'S';

    // Student 3
    strcpy(students[2].name, "Ansh");
    strcpy(students[2].roll_no, "CS080");
    //isa1
    students[2].isa_1[0] = 42;
    students[2].isa_1[1] = 49;
    students[2].isa_1[2] = 45;
    //isa2
    students[2].isa_2[0] = 46;
    students[2].isa_2[1] = 43;
    students[2].isa_2[2] = 50;
    //esa
    students[2].esa[0] = 96;
    students[2].esa[1] = 93;
    students[2].esa[2] = 100;
    //grade
    students[2].total[0] = (students[2].isa_1[0] + students[2].isa_2[0]) /2.0 + students[2].esa[0] / 2.0; //c
    students[2].grade[0] = 'S';
    students[2].total[1] = (students[2].isa_1[1] + students[2].isa_2[1]) /2.0 + students[2].esa[1] / 2.0; //physics
    students[2].grade[1] = 'S';
    students[2].total[2] = (students[2].isa_1[2] + students[2].isa_2[2]) /2.0 + students[2].esa[2] / 2.0; //math
    students[2].grade[2] = 'S';

    // Student 4
    strcpy(students[3].name, "Anish");
    strcpy(students[3].roll_no, "CS073");
    //isa1
    students[3].isa_1[0] = 48;
    students[3].isa_1[1] = 32;
    students[3].isa_1[2] = 30;
    //isa2
    students[3].isa_2[0] = 49;
    students[3].isa_2[1] = 47;
    students[3].isa_2[2] = 45;
    //esa
    students[3].esa[0] = 99;
    students[3].esa[1] = 97;
    students[3].esa[2] = 95;
    //grade
    students[3].total[0] = (students[3].isa_1[0] + students[3].isa_2[0]) /2.0 + students[3].esa[0] / 2.0; //c
    students[3].grade[0] = 'S';
    students[3].total[1] = (students[3].isa_1[1] + students[3].isa_2[1]) /2.0 + students[3].esa[1] / 2.0; //physics
    students[3].grade[1] = 'S';
    students[3].total[2] = (students[3].isa_1[2] + students[3].isa_2[2]) /2.0 + students[3].esa[2] / 2.0; //math
    students[3].grade[2] = 'S';

    // Student 5
    strcpy(students[4].name, "Abhishek");
    strcpy(students[4].roll_no, "CS001");
    //isa1
    students[4].isa_1[0] = 41;
    students[4].isa_1[1] = 38;
    students[4].isa_1[2] = 40;
    //isa2
    students[4].isa_1[0] = 46;
    students[4].isa_1[1] = 50;
    students[4].isa_1[2] = 49;
    //isa2
    students[4].esa[0] = 96;
    students[4].esa[1] = 100;
    students[4].esa[2] = 99;
    //grade
    students[4].total[0] = (students[4].isa_1[0] + students[4].isa_2[0]) /2.0 + students[4].esa[0] / 2.0; //c
    students[4].grade[0] = 'S';
    students[4].total[1] = (students[4].isa_1[1] + students[4].isa_2[1]) /2.0 + students[4].esa[1] / 2.0; //physics
    students[4].grade[1] = 'S';
    students[4].total[2] = (students[4].isa_1[2] + students[4].isa_2[2]) /2.0 + students[4].esa[2] / 2.0; //math
    students[4].grade[2] = 'S';

    *no_students += 5;
}
