#include "linked_list.h"
int main()
{
	
	print_list(NULL);

	printf("\n");

	struct node n0;

	n0.next = NULL;
	n0.cargo = 1;

	print_list(&n0);

	//should see    [1, ]


	printf("\n");

	int i = 10;
	struct node * x;

	while (i--) {
		x = insert_front(x,i);
	}

	print_list(x);

	//should see [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, ]

	printf("\n");

	x = free_list(x);

	print_list(x);

	//should be an empty list (random numbers)


	return 0;
}