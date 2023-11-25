#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int QDataType;

typedef struct QueueNode {
	QueueNode* next;
	QDataType data;
}QueueNode;

typedef struct Queue {
	QueueNode* head;
	QueueNode* tail;
}Queue;

//初始化
void QueueInit(Queue* pq);
//销毁
void QueueDestroy(Queue* pq);
//插入
void QueuePush(Queue* pq, QDataType x);
//删除
void QueuePop(Queue* pq);
//取出头的数据
QDataType QueueFront(Queue* pq);
//取出尾的数据
QDataType QueueBack(Queue* pq);
//队列是否为空
bool QueueEmpty(Queue* pq);
//队列中有多少个数据
int QueueSize(Queue* pq);