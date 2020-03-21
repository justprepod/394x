#include <stdio.h>
#include "lists.h"


int main(int argc, char **argv) {
	TListItem *list;

	list = list_create();

	list_append(list, 1);
	list_append(list, 1);
	list_append(list, 2);
	list_append(list, 3);
	list_append(list, 5);

	list_print(list);

	list_free(list);
}
