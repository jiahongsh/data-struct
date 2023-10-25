#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define N 100
typedef int SLDataType;

typedef struct Seqlist {
	SLDataType *a;
	int size;//表示数组中储存了多少数据
	int count;//表示能储存多少数据

}SL;

//接口函数
void SepListPushInit(SL* ps);
//尾插
void SepListPushBack(SL* ps, SLDataType x);
//删除
void SepListPopBack(SL* ps);
//前插
void SepListPushFront(SL* ps, SLDataType x);
//打印数据
void SepListPrintf(SL* ps);
//销毁空间
void SepListDestory(SL* ps);
