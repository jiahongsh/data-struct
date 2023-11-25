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

//��ʼ��
void QueueInit(Queue* pq);
//����
void QueueDestroy(Queue* pq);
//����
void QueuePush(Queue* pq, QDataType x);
//ɾ��
void QueuePop(Queue* pq);
//ȡ��ͷ������
QDataType QueueFront(Queue* pq);
//ȡ��β������
QDataType QueueBack(Queue* pq);
//�����Ƿ�Ϊ��
bool QueueEmpty(Queue* pq);
//�������ж��ٸ�����
int QueueSize(Queue* pq);