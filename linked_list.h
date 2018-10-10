#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node { struct node * next; int cargo;};

void print_list(struct node * n) {
	printf("[");
	while (n) {
		printf("%d, ", n->cargo);
		n = n->next;
	}
	printf("]\n");
}

struct node * insert_front(struct node * start , int new_cargo) {

	struct node * p = malloc(sizeof(struct node));

	p->cargo = new_cargo;
	p->next  = start;

	return p;
}

struct node * free_list(struct node * n) {

	struct node * start = n;

	struct node * placeholder = n;

	while (n) {
		placeholder = n->next;
		//printf("freeing: %d...\n", n->cargo);
		free(n);
		n = placeholder;
	}

	free(start);

	return start;

}