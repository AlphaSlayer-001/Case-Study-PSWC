#include"header.h"

void add(student *s, int *num){
    if (*num >= 10) {
        printf("Maximum number of students reached.\n");
        return;
    }

    printf("Enter student details:\n");

    printf("Roll number (12 characters): ");
    scanf("%s", s[*num].roll);

    printf("Name: ");
    scanf("%s", s[*num].name);

    printf("Section: ");
    scanf(" %c", &s[*num].sec);

    printf("Enter ISA1 marks for 5 subjects: ");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &s[*num].isa1[i]);
    }

    printf("Enter ISA2 marks for 5 subjects: ");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &s[*num].isa2[i]);
    }

    printf("Enter ESA marks for 5 subjects: ");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &s[*num].esa[i]);
    }

    (*num)++;
}