#include "headers.h"

int read(FILE *fp, std *s) {
    char line[1024];
    int i = 0, count = 0;
    fgets(line, sizeof(line), fp);

    // To read data from the CSV file and store it in the struct array
    while(fgets(line, sizeof(line), fp) != NULL){
        char *token = strtok(line, ",");
        strcpy(s[i].name, token);

        token = strtok(NULL, ",");
        s[i].rno = atoi(token);

        token = strtok(NULL, ",");
        s[i].sec = token[0];

        for (int j = 0; j < 3; j++) {
            token = strtok(NULL, ",");
            s[i].c[j] = atoi(token);
        }

        for (int j = 0; j < 3; j++) {
            token = strtok(NULL, ",");
            s[i].phy[j] = atoi(token);
        }

        for (int j = 0; j < 3; j++) {
            token = strtok(NULL, ",");
            s[i].math[j] = atoi(token);
        }
        i++;
        count++;
    }
    return count;
}