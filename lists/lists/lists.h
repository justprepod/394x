#ifndef __LISTS__
#define __LISTS__

typedef struct {
	int data;
	void *next;
} TListItem;

//создаёт список
TListItem *list_create();

//создаёт в памяти новый элемент и добавляет в конец списка
TListItem *list_append(TListItem *head, int data);

//последовательно выводит в stdout элементы списка
void list_print(TListItem *head);

//удаляет из памяти список
void list_free(TListItem **head);

#endif // !__LISTS__

