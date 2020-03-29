all: cirqueue.a transfer
cirqueue.a: cirqueue.o insert.o delete.o cirop.o
	ar rc cirqueue.a cirqueue.o insert.o delete.o cirop.o
cirqueue.o: cirqueue.c
	cc -c cirqueue.c
insert.o: insert.c
	cc -c insert.c
delete.o: delete.c
	cc -c delete.c
cirop: cirop.c
	cc -c cirop.c
transfer:
	mv cirqueue.a ..
clean:
	rm -rf *.o
