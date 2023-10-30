#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int SLTDateTtpe;

typedef struct SListnode {
	SLTDateTtpe data;
	struct SListnote* next;
}SLTNode;

//¥Ú”°
void SListprintf(SLTNode* phead);
//Œ≤≤Â
void SListPushBack(SLTNode** phead, SLTDateTtpe x);