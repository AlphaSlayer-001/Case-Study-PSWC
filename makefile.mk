CFLAGS = -Wall -Wextra -std=c11 -g

result: headers.h main.o read.o bubble_sort.o binary.o grade.o display.o update.o add.o write.o delete.o
	gcc main.o read.o bubble_sort.o binary.o grade.o display.o update.o add.o write.o delete.o -o result

main.o: headers.h main.c
	gcc -c main.c -o main.o

read.o: headers.h read.c
	gcc -c read.c -o read.o

bubble_sort.o: headers.h bubble_sort.c
	gcc -c bubble_sort.c -o bubble_sort.o

binary.o: headers.h binary.c
	gcc -c binary.c -o binary.o

grade.o: headers.h grade.c
	gcc -c grade.c -o grade.o

display.o: headers.h display.c
	gcc -c display.c -o display.o

update.o: headers.h update.c
	gcc -c update.c -o update.o

add.o: headers.h add.c
	gcc -c add.c -o add.o

write.o: headers.h write.c
	gcc -c write.c -o write.o

delete.o: headers.h delete.c
	gcc -c delete.c -o delete.o