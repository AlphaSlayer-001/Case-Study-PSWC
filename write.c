#include "headers.h"

void write(FILE *fp, std *s, int n) {
    // Move to the beginning of the file
    fseek(fp, 0, SEEK_SET);

    // Write the header line
    fprintf(fp, "Name,Roll No,Section,CS-ISA1,CS-ISA2,CS-ESA,Physics-ISA1,Physics-ISA2,Physics-ESA,Maths-ISA1,Maths-ISA2,Maths-ESA\n");

    // Write each student's data to the file
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s,%d,%c,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",
                s[i].name, s[i].rno, s[i].sec,
                s[i].c[0], s[i].c[1], s[i].c[2],
                s[i].phy[0], s[i].phy[1], s[i].phy[2],
                s[i].math[0], s[i].math[1], s[i].math[2]);
    }
}