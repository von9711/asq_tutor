all: stack.a transfer
stack.a: stack.o insert.o delete.o stkop.o
	ar rc stack.a stack.o insert.o delete.o stkop.o
stack.o: stack.c
	cc -c stack.c
insert.o: insert.c
	cc -c insert.c
delete.o: delete.c
	cc -c delete.c
stkop: stkop.c
	cc -c stkop.c
transfer:
	mv stack.a ..
clean:
	rm -rf *.o
