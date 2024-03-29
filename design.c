#include "header.h"

void display_design() {
    printf("\t\t\t*******************************************************************************\n");
    printf("\t\t\t*                                                                             *\n");
    printf("\t\t\t*                                PES UNIVERSITY                               *\n");
    printf("\t\t\t*                                                                             *\n");
    printf("\t\t\t*******************************************************************************\n");
}

void clearScreen() {
    printf("\033[2J\033[H");
}

int str_size(char *string){
    int size = 0, i;
    for(i = 0; string[i] != '\0'; i++){
        size++;
    }
    return size;
}

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // Clear input buffer
}

