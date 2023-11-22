#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int  SLTDateType;

typedef struct ListNode {
	SLTDateType data;
	struct ListNode* next;
	struct ListNode* prev;
}SLTNode;

//初始化
SLTNode* ListInit();
//打印
void Listprintf(SLTNode* phead);

//尾插
void ListPushBack(SLTNode* phead, SLTDateType x);

//头插
void ListPushFrint(SLTNode*phead, SLTDateType x);

//头删
void ListPopFrint(SLTNode* phead);

//头插
void ListPushFrint(SLTNode* phead);

//查找
SLTNode* ListFind(SLTNode* phead, SLTDateType x);

//插入（节点前插入）
void ListInsert(SLTNode* pos, SLTDateType x);

//销毁
void ListDestory(SLTNode* phead);

//删除某一个节点
void ListErase( SLTNode* pos);

//在某个节点后插入
void ListInsertafter(SLTNode* pos, SLTDateType x);

//删除某个节点后的数据
void ListEraseAfter(SLTNode* pos);



