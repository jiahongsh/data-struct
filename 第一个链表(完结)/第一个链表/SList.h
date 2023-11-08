#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<errno.h>
#include<assert.h>
typedef int SLTDateTtpe;

typedef struct SListnode {
	SLTDateTtpe data;
	struct SListnote* next;
}SLTNode;

//打印
void SListprintf(SLTNode* phead);

//尾插
void SListPushBack(SLTNode** phead, SLTDateTtpe x);

//头插
void SListPushFrint(SLTNode** phead, SLTDateTtpe x);

//尾删
void SListPopBack(SLTNode** phead);

//头插
void SListPushFrint(SLTNode** phead);

//查找
SLTNode* SlistFind(SLTNode* phead, SLTDateTtpe x);

//插入（节点前插入）
void SListInsert(SLTNode** phead, SLTNode* pos, SLTDateTtpe x);

//销毁
void SListDestory(SLTNode** phead);

//删除某一个节点
void SListErase(SLTNode** phead, SLTNode* pos);

//在某个节点后插入
void SListInsertafter( SLTNode* pos, SLTDateTtpe x);

//删除某个节点后的数据
void SListEraseAfter( SLTNode* pos);