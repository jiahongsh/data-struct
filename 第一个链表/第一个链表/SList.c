#include"SList.h"

void SListprintf(SLTNode* phead) {
	SLTNode* cur = phead;
	while(cur != NULL){
		printf("%d->", cur->data);
		cur = cur->next;
	}
}

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