#include "headers.h"

void swap(std **ptr1, std **ptr2) {
    std *temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

// The function to perform bubble sort on array of pointers to struct student
void bubble_sort(std *arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j]->rno > arr[j + 1]->rno) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}