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

//��ӡ
void SListprintf(SLTNode* phead);

//β��
void SListPushBack(SLTNode** phead, SLTDateTtpe x);

//ͷ��
void SListPushFrint(SLTNode** phead, SLTDateTtpe x);

//βɾ
void SListPopBack(SLTNode** phead);

//ͷ��
void SListPushFrint(SLTNode** phead);

//����
SLTNode* SlistFind(SLTNode* phead, SLTDateTtpe x);

//���루�ڵ�ǰ���룩
void SListInsert(SLTNode** phead, SLTNode* pos, SLTDateTtpe x);

//����
void SListDestory(SLTNode** phead);

//ɾ��ĳһ���ڵ�
void SListErase(SLTNode** phead, SLTNode* pos);

//��ĳ���ڵ�����
void SListInsertafter( SLTNode* pos, SLTDateTtpe x);

//ɾ��ĳ���ڵ�������
void SListEraseAfter( SLTNode* pos);