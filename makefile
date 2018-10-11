make: linked_list.c linked_list.h
	gcc linked_list.h
	gcc linked_list.c

run: a.out linked_list.c
	./a.out

clean: a.out linked_list.h.gch
	rm a.out
	rm linked_list.h.gch
	