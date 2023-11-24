#include"Stack.h"

//初始化
void StackInit(ST* ps) {
	assert(ps);
	ps->a = NULL;
	ps->top = 0;//top指向所需数据的下一个；
	ps->capacity = 0;
}

void StackPush(ST* ps, STDataType x) {
	assert(ps);
	//扩容
	/*if (ps->top == ps->capacity) {*/
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType* tmp = relloc(ps->a, sizeof(STDataType));
		if (tmp == NULL) {//开辟空间失败，退出程序
			printf("relloc faill\n");
			exit(-1);
		}
		//更新新的头和新的空间大小
		ps->a = tmp;
		ps->capacity = newcapacity;
		//插入
		ps->a[ps->top] = x;
		ps->top++;
	}

void StackPop(ST * ps) {
	//温柔的方式
	/*if (ps->top == 0) {
		printf("StackPop faill\n");
		exit(-1);
	}*/
	assert(ps);
	//暴力的方式()
	ps->top--;
	//将储存的数据数减一，无法访问到该数据，下次添加新的数据就会覆盖该数据，相当于删除
	}


//取出栈顶的数据
STDataType StackTop(ST* ps) {
	assert(ps);
	assert(!StackEmpty(ps));

	return ps->a[ps->top - 1];
	
}

//判断栈是否为空
bool StackEmpty(ST* ps) {
	if (ps->top == 0) {
		return true;
	}
	else {
		return false;                     
	}
}


//计算有多少个数据
int StackSize(ST* ps) {
	assert(ps);

	return ps->top;
}


//销毁栈
void StackDestroy(ST* ps) {
	int i = 0;
	for (i = 0; i < ps->top; i++) {
		free(ps->a[i]);
	}
}