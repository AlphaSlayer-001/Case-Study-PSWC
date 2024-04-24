result: header.h main.o display.o grade.o reval.o add_std.o
	gcc main.o display.o grade.o reval.o add_std.o -o result
main.o: header.h main.c
	gcc main.c -c main.o
display.o: header.h display.c
	gcc display.c -c display.o
grade.o: header.h grade.c
	gcc grade.c -c grade.o
reval.o: header.h reval.c
	gcc reval.c -c reval.o
add_std.o: header.h add_std.c
	gcc add_std.c -c add_std.o