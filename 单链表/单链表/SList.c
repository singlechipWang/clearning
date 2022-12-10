#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"
//创建一个节点
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
//尾插
void SListPushBack(SL** PPhead, SListType x) //这里必须传递指针的地址,因为形参PPhead的改变不会影响实参plist
{
	SL* newnode = SLCreate(x);
	if (*PPhead == NULL) 
	{
		*PPhead = newnode;
	}
	else 
	{
		SL* tail = *PPhead;
		//先找到尾节点
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = newnode;
	}
}
//头插
void SListPushFront(SL** PPhead, SListType x) //PPhead是plist的地址，通过对PPhead解引用可以改变plist
{
	SL* newnode = SLCreate(x);
	newnode->next = *PPhead;
	*PPhead = newnode;
}
//尾删
void SListPopBack(SL** PPhead) 
{
	//如果链表为空
	/*if (*PPhead == NULL) 
	{
		return;
	}*/
	assert(*PPhead != NULL);
	//如果只剩下一个节点
	if ((*PPhead)->next == NULL) 
	{
		free(*PPhead);
		*PPhead = NULL;
	}
	else//如果剩下两个及以上节点
	{
		SL* prev = NULL;
		SL* tail = *PPhead;
		//先找到尾节点
		//while (tail->next != NULL)
		while(tail->next)
		{
			prev = tail;//找到尾结点的前一个结点
			tail = tail->next;
		}
		free(tail);
		tail = NULL;

		prev->next = NULL;
	}
}
//头删
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
	if (*PPhead == pos) //如果要插入的位置就是头结点，那就调用头插
	{
		newnode->next = *PPhead;
		*PPhead = newnode;
	}
	else 
	{
		//找到pos的前一个位置
		SL* posprev = *PPhead;
		while (posprev->next != pos)
		{
			posprev = posprev->next;
		}
		posprev->next = newnode;
		newnode->next = pos;
	}
}
//在pos位置的后面插入，更适合单链表也更简单
void SListIsertAfter(SL* pos, SListType x) 
{
	SL* newnode = SLCreate(x);

	newnode->next = pos->next;
	pos->next = newnode;
}
void SListErase(SL** PPhead, SL* pos) 
{
	assert(PPhead);
	if (*PPhead = pos) //或者直接调用头删
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