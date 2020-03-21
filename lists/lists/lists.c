#include <stdlib.h>
#include "lists.h"

//создаёт список
TListItem *list_create() {
	TListItem *item;

	item = (TListItem*)malloc(sizeof(TListItem));
	if (item != NULL) {
		(*item).data = 0;
		(*item).next = NULL;
	}

	return item;
}

//создаёт в памяти новый элемент и добавляет в конец списка
TListItem *list_append(TListItem *head, int data) {
	TListItem *item;

	while ((*head).next != NULL) {
		head = (*head).next;
	}

	item = (TListItem*)malloc(sizeof(TListItem));
	if (item != NULL) {
		(*item).data = data;
		(*item).next = NULL;

		(*head).next = item;
	}

	return item;
}

void list_traverse(TListItem *head, TFunc f) {
	head = head->next;
	while (head != NULL) {
		f(head->data);
		head = head->next;
	}
}

//удаляет из памяти список
void list_free(TListItem **head) {
	TListItem *ptr, *next;

	ptr = *head;

	while (ptr != NULL) {
		next = (*ptr).next;
		free(ptr);
		ptr = next;
	}

	*head = NULL;
}

//ищет в списке элемент со значением needle, возвращает указатель на первый найденный, либо NULL
TListItem *list_search(TListItem *head, int needle) {
	return NULL;
}

//удаляет из списка элемент item
void *list_delete(TListItem *head, TListItem *item) {

}