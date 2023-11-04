#include"SList.h"

//打印
void SListprintf(SLTNode* phead) {
	SLTNode* cur = phead;
	while(cur != NULL){
		printf("%d->", cur->data);
		cur = cur->next;
	}
}

//尾插
void SListPushBack(SLTNode** phead, SLTDateTtpe x) {
	
	SLTNode* newtail = (SLTNode*)malloc(sizeof(SLTNode));
	newtail->data = x;
	newtail->next = NULL;
	//找到最未的数据；
	if (*phead == NULL) {
		*phead = newtail;
	}
	SLTNode* tail = *phead;
	while (tail->next!= NULL) {
		tail = tail->next;
	}
	
	tail->next = newtail;
}

//头插
SListPushFrint(SLTNode** phead, SLTDateTtpe x) {
	SLTNode* newstart = (SLTNode*)malloc(sizeof(SLTNode));
	newstart->data = x;
	newstart->next = NULL;
	//让新值在第一个节点前
	newstart->next = *phead;
	//使原来的头的地址转变为新插入节点的地址
	*phead = newstart;
}

//尾删
void SListPopBack(SLTNode** phead) {
	if (*phead == NULL) {
		printf(" SListPopBack:%d", strerror(errno));
	}
	//判断是否为空
	if (*phead == NULL) {
		return;
	}
	//是否只有一个节点
	if ((*phead)->next == NULL) {
		free(*phead);
		*phead = NULL;
	}
	//找尾
	SLTNode* tail = *phead;
	SLTNode* prev = NULL;
	while (tail->next != NULL) {
		prev = tail;
		tail = tail->next;
	}
	//释放空间
	free(tail);

	tail = NULL;
	prev->next = NULL;
	
	
}

//头删
SListPushFrint(SLTNode** phead) {
	//判断是否为空
	if (*phead == NULL) {
		printf("SListPushFrint:%d", strerror(errno));
		exit(-1);
	}

	//进行头删
	SLTNode* newstart =NULL;
	newstart = (*phead)->next;
	free(*phead);
	*phead = NULL;
	*phead = newstart;

	
}


//查找
SLTNode* SlistFind(SLTNode* phead, SLTDateTtpe x) {
	SLTNode* cur = phead;
	while (cur) {
		if (cur->data == x) {
			return cur;
		}
		else {
			cur = cur->next;
		}
	}
	return NULL;
}

//插入                              pos:在哪插
void SListInsert(SLTNode** phead, SLTNode* pos, SLTDateTtpe x) {

	if (*phead == pos) {
		//相当于头插
		SListPushFrint(phead, x);
	}
	else {
	   SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	   SLTNode* PosPrev = *phead;
	   while (PosPrev->next == pos) {
		   PosPrev = PosPrev->next;
	   }

	   newnode->next = pos;
	   PosPrev->next = newnode;



	}

}