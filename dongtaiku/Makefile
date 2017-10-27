main: first libstack.so main.c
	gcc main.c -L. -lstack -Istack -o main
	
libstack.so: stack.o push.o pop.o is_empty.o
	gcc -shared -o libstack.so stack.o push.o pop.o is_empty.o
	
first:
	gcc -c -fPIC stack/stack.c stack/push.c stack/pop.c stack/is_empty.c
	
clean:
	rm -rf *.o *.so main
	
exe:
	LD_LIBRARY_PATH=. ./main