#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SListType;

typedef struct SListNode 
{
	SListType data;
	struct SListNode* next;
}SL;

void SListPrint(SL* Phead);
void SListPushBack(SL** PPhead, SListType x);
void SListPushFront(SL** PPhead, SListType x);
void SListPopBack(SL** PPhead);
void SListPopFront(SL** PPhead);

SL* SListFind(SL* Phead, SListType x);
//��posλ��֮ǰ����һ���ڵ�
void SListIsert(SL** PPhead,SL* pos, SListType x);
//��pos֮�����
void SListIsertAfter(SL* pos, SListType x);
void SListErase(SL** PPhead, SL* pos);
//void SListDestroy(SL* Phead);