all: queue.a transfer
queue.a: queue.o insert.o delete.o queop.o
	ar rc queue.a queue.o insert.o delete.o queop.o
queue.o: queue.c
	cc -c queue.c
insert.o: insert.c
	cc -c insert.c
delete.o: delete.c
	cc -c delete.c
queop: queop.c
	cc -c queop.c
transfer:
	mv queue.a ..
clean:
	rm -rf *.o
