#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

void TestList1() 
{
	SL* PList = NULL;//开始链表为空
	SListPushBack(&PList,1);
	SListPushBack(&PList, 2);
	SListPushBack(&PList, 3);
	SListPushBack(&PList, 4);

	SListPrint(PList);

	SListPushFront(&PList, 1);
	SListPushFront(&PList, 2);
	SListPushFront(&PList, 3);
	SListPushFront(&PList, 4);
	SListPrint(PList);
}
void TestList2()
{
	SL* PList = NULL;//开始链表为空
	SListPushBack(&PList, 1);
	SListPushBack(&PList, 2);
	SListPushBack(&PList, 3);
	SListPushBack(&PList, 4);

	SListPrint(PList);

	SListPopBack(&PList);
	SListPopBack(&PList);
	SListPopBack(&PList);
	SListPopBack(&PList);
	SListPopBack(&PList);
	
	SListPrint(PList);
}
void TestList3()
{
	SL* PList = NULL;//开始链表为空
	SListPushBack(&PList, 1);
	SListPushBack(&PList, 2);
	SListPushBack(&PList, 3);
	SListPushBack(&PList, 4);

	SListPrint(PList);

	SListPopFront(&PList);

	SListPrint(PList);
}
void TestList4()
{
	SL* PList = NULL;//开始链表为空
	SListPushBack(&PList, 1);
	SListPushBack(&PList, 2);
	SListPushBack(&PList, 3);
	SListPushBack(&PList, 4);
	SListPushBack(&PList, 2);
	SListPrint(PList);
	//查找
	SL* pos = SListFind(PList,2);
	int i = 1;
	while (pos) 
	{
		printf("第%d个pos节点:%p->%d\n",i++,pos,pos->data);
		pos = SListFind(pos->next, 2);
	}
	//修改3为30
	pos = SListFind(PList, 3);
	if (pos) 
	{
		pos->data = 30;
	}
	SListPrint(PList);
}

void TestList5()
{
	SL* PList = NULL;//开始链表为空
	SListPushBack(&PList, 1);
	SListPushBack(&PList, 2);
	SListPushBack(&PList, 3);
	SListPushBack(&PList, 4);

	SListPrint(PList);

	SL* pos = SListFind(PList, 3);
	if (pos) 
	{
		SListIsert(&PList,pos,30);
	}
	SListPrint(PList);

}
void TestList6()
{
	SL* PList = NULL;//开始链表为空
	SListPushBack(&PList, 1);
	SListPushBack(&PList, 2);
	SListPushBack(&PList, 3);
	SListPushBack(&PList, 4);

	SListPrint(PList);

	SL* pos = SListFind(PList, 3);
	if (pos)
	{
		//SListIsertAfter(pos, 30);
		SListErase(&PList,pos);
	}
	SListPrint(PList);

}
int main() 
{
	//TestList1();
	//TestList2();
	//TestList3();
	//TestList4();
	//TestList5();
	TestList6();
	return 0;
}


