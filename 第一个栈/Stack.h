#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int STDataType;

typedef struct Stack {
	STDataType* a;
	int top;//栈顶
	int capacity;//栈里有多少个数据
}ST;

//初始化
void StackInit(ST* ps);
//销毁栈
void StackDestroy(ST* ps);
//插入
void StackPush(ST* ps, STDataType x);
//删除
void StackPop(ST* ps);
//取出栈顶的数据
STDataType StackTop(ST* ps);
//计算有多少个数据
int StackSize(ST* ps);
//判断栈是否为空
bool StackEmpty(ST* ps);






