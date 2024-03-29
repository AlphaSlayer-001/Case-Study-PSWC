result: header.h main.o design.o details.o grade_card.o add_new_student.o
	gcc -g main.o design.o details.o grade_card.o add_new_student.o -o result
main.o: main.c header.h
	gcc -c main.c
design.o: design.c header.h
	gcc -c design.c
details.o: details.c header.h
	gcc -c details.c
grade_card.o: grade_card.c header.h
	gcc -c grade_card.c
add_new_student.o: add_new_student.c header.h
	gcc -c add_new_student.c
