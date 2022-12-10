#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"
//����һ���ڵ�
SL* SLCreate(SListType x)
{
	SL* newnode = (SL*)malloc(sizeof(SL));
	newnode->data = x;
	newnode->next = NULL;
	if (newnode == NULL) 
	{
		printf("malloc fail\n");
		exit(-1);
	}
	return newnode;
}
void SListPrint(SL* Phead) 
{
	SL* Cur = Phead;
	while (Cur != NULL) 
	{
		printf("%d->",Cur->data);
		Cur = Cur->next;
	}
	printf("NULL\n");
}
//β��
void SListPushBack(SL** PPhead, SListType x) //������봫��ָ��ĵ�ַ,��Ϊ�β�PPhead�ĸı䲻��Ӱ��ʵ��plist
{
	SL* newnode = SLCreate(x);
	if (*PPhead == NULL) 
	{
		*PPhead = newnode;
	}
	else 
	{
		SL* tail = *PPhead;
		//���ҵ�β�ڵ�
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = newnode;
	}
}
//ͷ��
void SListPushFront(SL** PPhead, SListType x) //PPhead��plist�ĵ�ַ��ͨ����PPhead�����ÿ��Ըı�plist
{
	SL* newnode = SLCreate(x);
	newnode->next = *PPhead;
	*PPhead = newnode;
}
//βɾ
void SListPopBack(SL** PPhead) 
{
	//�������Ϊ��
	/*if (*PPhead == NULL) 
	{
		return;
	}*/
	assert(*PPhead != NULL);
	//���ֻʣ��һ���ڵ�
	if ((*PPhead)->next == NULL) 
	{
		free(*PPhead);
		*PPhead = NULL;
	}
	else//���ʣ�����������Ͻڵ�
	{
		SL* prev = NULL;
		SL* tail = *PPhead;
		//���ҵ�β�ڵ�
		//while (tail->next != NULL)
		while(tail->next)
		{
			prev = tail;//�ҵ�β����ǰһ�����
			tail = tail->next;
		}
		free(tail);
		tail = NULL;

		prev->next = NULL;
	}
}
//ͷɾ
void SListPopFront(SL** PPhead) 
{
	assert(*PPhead != NULL);

	SL* head = (*PPhead)->next;
	free(*PPhead);	
	*PPhead = head;
}
SL* SListFind(SL* Phead, SListType x) 
{
	SL* Cur = Phead;
	while (Cur) 
	{
		if (Cur->data == x) 
		{
			return Cur;
		}
		else 
		{
			Cur = Cur->next;
		}
		
	}
	return NULL;
}
void SListIsert(SL** PPhead, SL* pos, SListType x) 
{
	SL* newnode = SLCreate(x);
	if (*PPhead == pos) //���Ҫ�����λ�þ���ͷ��㣬�Ǿ͵���ͷ��
	{
		newnode->next = *PPhead;
		*PPhead = newnode;
	}
	else 
	{
		//�ҵ�pos��ǰһ��λ��
		SL* posprev = *PPhead;
		while (posprev->next != pos)
		{
			posprev = posprev->next;
		}
		posprev->next = newnode;
		newnode->next = pos;
	}
}
//��posλ�õĺ�����룬���ʺϵ�����Ҳ����
void SListIsertAfter(SL* pos, SListType x) 
{
	SL* newnode = SLCreate(x);

	newnode->next = pos->next;
	pos->next = newnode;
}
void SListErase(SL** PPhead, SL* pos) 
{
	assert(PPhead);
	if (*PPhead = pos) //����ֱ�ӵ���ͷɾ
	{
		/**PPhead = pos->next;
		free(pos);*/
		SListPopFront(PPhead);
	}
	else 
	{
		SL* prev = *PPhead;
		while (prev->next != pos) 
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
		pos = NULL;
	}
}
//void SListDestroy(SL* Phead) 
//{
//
//}