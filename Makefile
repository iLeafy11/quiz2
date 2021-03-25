CC:=gcc -Wall
obj:=cstr merge_sort

cstr: cstr.o main.c
	$(CC) cstr.o main.c -o cstr
    
merge: merge_sort
	$(cc) merge.c -o merge_sort

clean:
	rm -f *.o $(obj)
	
