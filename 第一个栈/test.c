#include"Stack.h"


void test() {
	ST st;
	StackInit(&st);

	StackPush(&st, 1);
	StackPush(&st,2);
	StackPush(&st, 3);
	StackPop(&st);
	StackPush(&st, 4);
	StackPush(&st, 5);
	StackPop(&st);
	printf("%d", StackTop(&st));
	StackPop(&st);
	printf("%d", StackTop(&st));
	StackPop(&st);
	StackPush(&st, 6);
	StackPush(&st, 7);

	//打印数据
	while (!StackEmpty(&st)) {
		printf("%d", StackTop(&st));
		StackPop(&st);
	}
	StackDestroy(&st);
}

int main() {
	test();
	return 0;
}