#include"Queue.h"


//初始化
void QueueInit(Queue* pq) {
	assert(pq);
	pq->head = NULL;
	pq->tail = NULL;
}


//销毁
void Queuedestroy(Queue* pq) {
	assert(pq);
	QueueNode* cur = pq->head;
	while (cur != NULL) {
		QueueNode* next = cur->next;
		free(cur);
		cur = next;
	}
}


//插入
void QueuePush(Queue* pq, QDataType x){
	assert(pq);
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	newnode->data = x;
	newnode->next = NULL;
	if (pq->head == NULL) {
		pq->head = pq->tail = newnode;
	}
	else {
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
}


//删除
void QueuePop(Queue* pq) {
	assert(pq);
	//为空的情况
	//1断言报错
	assert(!QueueEmpty(pq));
	//2手动判断，退出程序且显示错误位置
	/*if (pq->head == NULL) {
		printf("QueuePop fail\n");
		exit(-1);
	}*/
	
	QueueNode* copy = pq->head;
	free(pq->head);
	pq->head = copy->next;
	//当队列数据被全部删除时，tail指向的空间已经被free了，变成了野指针
	if (pq->head == NULL) {
		pq->tail == NULL;
	}
}

//队列是否为空
bool QueueEmpty(Queue* pq) {
	assert(pq);
	if (pq->head == NULL) {
		return true;
	}
	return false;
}


//队列中有多少个数据
int QueueSize(Queue* pq) {
	assert(pq);
	int count = 0;
	QueueNode* cur = pq->head;
	while (cur) {
		cur=cur->next;
		count++;
	}
	return count;
}

//取出头的数据
QDataType QueueFront(Queue* pq) {
	assert(pq);
	assert(!QueueEmpty(pq));
	return pq->head->data;
}

//取出尾的数据
QDataType QueueBack(Queue* pq) {
	assert(pq);
	assert(!QueueEmpty(pq));
	return pq->tail->data;
}