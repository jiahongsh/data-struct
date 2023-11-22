#include"List.h"

//初始化
SLTNode* ListInit() {
	//创建一个哨兵位
	SLTNode* phead = (SLTNode*)malloc(sizeof(SLTNode));
	phead->next = phead;
	phead->prev = phead;

	return phead;
}


void ListPushBack(SLTNode* phead, SLTDateType x) {
	assert(phead);
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	SLTNode* tail = phead->prev;
	newnode->data = x;
	//链接
	newnode->prev = tail;
	tail->next = newnode;
	newnode->next = phead;
	phead->prev = newnode;

}



void Listprintf(SLTNode* phead) {
	assert(phead);
	SLTNode* cur = phead->next;
	while (cur != phead) {
		
		printf("%d", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

//尾删
void ListPopBack(SLTNode* phead) {
	assert(phead);
	assert(phead->next != phead);
	SLTNode* tail=phead->prev;
	SLTNode* newtail = tail->prev;
	free(tail);
	newtail->next = phead;
	phead->prev = newtail;

}
//头插
void ListPushFrint(SLTNode* phead, SLTDateType x) {
	assert(phead);
	/*SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	SLTNode* next = phead->next;

	phead->next = newnode;
	newnode->prev = phead;

	newnode->next = next;
	next->prev = newnode;
	*/
	ListInsert(phead->next, x);
}
//头删
void ListPopFrint(SLTNode* phead) {
	assert(phead);
	SLTNode* next = phead->next->next;
	free(phead->next);
	phead->next = next;
	next->prev = phead;
}

SLTNode* ListFind(SLTNode* phead, SLTDateType x) {
	assert(phead);
	SLTNode* cur = phead->next;
	while (cur!=phead) {
		if (cur->data == x) {
            return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

//插入（节点前插入）
void ListInsert( SLTNode* pos, SLTDateType x) {
	//开辟新的节点和赋值数据
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	SLTNode* posprev = pos->prev;
	
	//插入节点
	posprev->next = newnode;
	newnode->prev = posprev;
	pos->prev = newnode;
	newnode->next = pos;
}

//删除某一个节点
void ListErase( SLTNode* pos) {
	assert(pos);
	SLTNode* next = pos->next;
	SLTNode* posprev = pos->prev;
	free(pos);
	posprev->next = next;
	next->prev = posprev;
	
}

//尾插
void ListPushBack(SLTNode* phead, SLTDateType x) {
	assert(phead);
	ListInsert(phead, x);
}

//销毁
void ListDestory(SLTNode* phead) {
	assert(phead);
	SLTNode* cur = phead->next;
	while (cur != phead) {
		SLTNode* next = cur->next;
		free(cur);
	}
	free(phead);
	phead = NULL;
}