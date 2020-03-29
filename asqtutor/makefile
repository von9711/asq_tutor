all: asq clean

asq: main.o arr.a stack.a queue.a cirqueue.a
	cc -o asq main.o arr.a stack.a queue.a cirqueue.a
main.o: main.c
	cc -c main.c
arr.a:
	make -C arr
stack.a:
	make -C stack
queue.a:
	make -C queue
cirqueue.a:
	make -C cirqueue
clean:
	make clean -C arr
	make clean -C stack
	make clean -C queue
	make clean -C cirqueue
