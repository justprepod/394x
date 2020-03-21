#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

//������ ������
TListItem *list_create() {
	TListItem *item;

	item = (TListItem*)malloc(sizeof(TListItem));
	if (item != NULL) {
		(*item).data = 0;
		(*item).next = NULL;
	}

	return item;
}

//������ � ������ ����� ������� � ��������� � ����� ������
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

//��������������� ������� � stdout �������� ������
void list_print(TListItem *head) {
	head = (*head).next;
	while (head != NULL) {
		printf("%d\n", (*head).data);
		head = (*head).next;
	}
}

//������� �� ������ ������
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