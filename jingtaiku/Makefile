main: first libstack.a main.c
	gcc main.c -L. -lstack -Istack -o main
	
libstack.a: stack.o push.o pop.o is_empty.o
	ar rs libstack.a stack.o push.o pop.o is_empty.o
	
first:
	gcc -c stack/stack.c stack/push.c stack/pop.c stack/is_empty.c
	
clean:
	rm -rf *.o *.a main
	
exe:
	./main