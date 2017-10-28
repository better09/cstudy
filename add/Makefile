main: share static
	gcc main.c -L. -ladd_a -Iadd_a -o main_a
	gcc main.c -L. -ladd_so -Iadd_so -o main_so
	
share:
	cp -a add/ add_so/
	gcc -c -fPIC add_so/add.c
	gcc -shared -o libadd_so.so add.o

static:
	cp -a add/ add_a/
	gcc -c add_a/add.c
	ar rs libadd_a.a add.o
	
clean:
	rm -rf *.o main_a main_so *.a *.so add_a add_so
	
exe_a:
	./main_a
	
exe_so:
	LD_LIBRARY_PATH=. ./main_so