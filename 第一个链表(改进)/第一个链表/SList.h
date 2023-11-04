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

//¥Ú”°
void SListprintf(SLTNode* phead);

//Œ≤≤Â
void SListPushBack(SLTNode** phead, SLTDateTtpe x);

//Õ∑≤Â
void SListPushFrint(SLTNode** phead, SLTDateTtpe x);

//Œ≤…æ
void SListPopBack(SLTNode** phead);

//Õ∑≤Â
void SListPushFrint(SLTNode** phead);

//≤È’“
SLTNode* SlistFind(SLTNode* phead, SLTDateTtpe x);

//≤Â»Î
void SListInsert(SLTNode** phead, SLTNode* pos, SLTDateTtpe x);

//œ˙ªŸ
void SListDestory(SLTNode** phead);

//
void SListErase(SLTNode** phead, SLTNode* pos);
