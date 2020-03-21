#include <stdio.h>
#include "lists.h"

void print(int value) {
	printf("%d ", value);
}

int main(int argc, char **argv) {
	TListItem *list;
	TListItem *item;

	list = list_create();

	list_append(list, 1);
	list_append(list, 2);
	list_append(list, 3);
	list_append(list, 5);
	list_append(list, 8);

	list_traverse(list, print); // ожидаемый результат: 1 2 3 5 8
	printf("\n");

	item = list_search(list, 5);

	list_delete(list, item);

	list_traverse(list, print); // ожидаемый результат: 1 2 3 8
	
	list_free(list);
}
