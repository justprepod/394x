#ifndef __LISTS__
#define __LISTS__

typedef struct {
	int data;
	void *next;
} TListItem;

typedef void *TFunc(int);

//������ ������
TListItem *list_create();

//������ � ������ ����� ������� � ��������� � ����� ������
TListItem *list_append(TListItem *head, int data);

//��������������� ������� ������, �������� � ������� �������� ������� f
void list_traverse(TListItem *head, TFunc f);

//������� �� ������ ������
void list_free(TListItem **head);

//���� � ������ ������� �� ��������� needle, ���������� ��������� �� ������ ���������, ���� NULL
TListItem *list_search(TListItem *head, int needle);

//������� �� ������ ������� item
void *list_delete(TListItem *head, TListItem *item);

#endif // !__LISTS__

