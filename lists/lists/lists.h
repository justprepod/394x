#ifndef __LISTS__
#define __LISTS__

typedef struct {
	int data;
	void *next;
} TListItem;

//������ ������
TListItem *list_create();

//������ � ������ ����� ������� � ��������� � ����� ������
TListItem *list_append(TListItem *head, int data);

//��������������� ������� � stdout �������� ������
void list_print(TListItem *head);

//������� �� ������ ������
void list_free(TListItem **head);

#endif // !__LISTS__

