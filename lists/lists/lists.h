#ifndef __LISTS__
#define __LISTS__

typedef struct {
	int data;
	void *next;
} TListItem;

typedef void *TFunc(int);

//создаЄт список
TListItem *list_create();

//создаЄт в пам€ти новый элемент и добавл€ет в конец списка
TListItem *list_append(TListItem *head, int data);

//последовательно обходит список, примен€€ к каждому элементу функцию f
void list_traverse(TListItem *head, TFunc f);

//удал€ет из пам€ти список
void list_free(TListItem **head);

//ищет в списке элемент со значением needle, возвращает указатель на первый найденный, либо NULL
TListItem *list_search(TListItem *head, int needle);

//удал€ет из списка элемент item
void *list_delete(TListItem *head, TListItem *item);

#endif // !__LISTS__

