#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<errno.h>
typedef int SLTDateTtpe;

typedef struct SListnode {
	SLTDateTtpe data;
	struct SListnote* next;
}SLTNode;

//��ӡ
void SListprintf(SLTNode* phead);

//β��
void SListPushBack(SLTNode** phead, SLTDateTtpe x);

//ͷ��
void SListPushFrint(SLTNode** phead, SLTDateTtpe x);

//βɾ
void SListPopBack(SLTNode** phead);

//ͷ��
void SListPushFrint(SLTNode** phead);

//����
SLTNode* SlistFind(SLTNode* phead, SLTDateTtpe x);

//����
void SListInsert(SLTNode** phead, SLTNode* pos, SLTDateTtpe x);

//����
void SListDestory(SLTNode** phead);

//
void SListErase(SLTNode** phead, SLTNode* pos);
