#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int SLTDateTtpe;

typedef struct SListnode {
	SLTDateTtpe data;
	struct SListnote* next;
}SLTNode;

//��ӡ
void SListprintf(SLTNode* phead);
//β��
void SListPushBack(SLTNode** phead, SLTDateTtpe x);