#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<unistd.h>

typedef struct student{
    char roll[14];
    char name[100];
    char sec;
    int isa1[5];
    int isa2[5];
    int esa[5];
}student;

void display();
void print_grade(student *s, char r_no[14]);
void star(int n);
void update(student *p, char r_n[14]);
void add(student *s, int *num);