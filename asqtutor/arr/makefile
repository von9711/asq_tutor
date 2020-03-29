all: arr.a transfer
arr.a: arr.o insert.o delete.o disp.o create.o
		ar rc arr.a arr.o insert.o delete.o disp.o create.o
arr.o: arr.c
		cc -c arr.c
insert.o: insert.c
		cc -c insert.c
delete.o: delete.c
		cc -c delete.c
disp.o: disp.c
	  cc -c disp.c
create.o: create.c
	cc -c create.c
transfer:
		mv arr.a ..
clean:
		rm -rf *.o
