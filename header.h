#include<stdio.h>
#include<string.h>
#include<unistd.h>

#define max_len 100
#define max_no_students 100

struct student{
    char name[max_len];
    char roll_no[5];
    int isa_1[3];
    int isa_2[3];
    int esa[3];
    float total[3];
    char grade[3];
};

int str_size(char *string);
void clear_input_buffer();
void clearScreen();
void details(struct student *students, int *no_students);
void display_design();
void print_grade_card(struct student *students, char *r_no, int no_students);
void add_new_student(struct student *students, int *no_students);
