#ifndef HEADERS_H
#define HEADERS_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

#define MAX_NO_STUDENTS 100

typedef struct student {
    char name[50];
    int rno;
    char sec;
    int c[3];
    int phy[3];
    int math[3];
} std;

int read(FILE *fp, std *s);
void bubble_sort(std *arr[], int n);
std *binary_search(std *arr[], int n, int r);
void display_logo();
void grade_card(std **s, int n);
void update_marks(std **students, int n);
void add_new_student(std *students, int *n);
void delete_student(std *students, int *n);
void write(FILE *fp, std *s, int n);

#endif
