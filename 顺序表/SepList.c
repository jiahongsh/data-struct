#include"SepList.h"
//初始化
void SepListPushInit(SL* ps) {
	ps->a = NULL;
	ps->count = 0;
	ps->size = 0;
}
//尾插
void SepListPushBack(SL* ps, SLDataType x) {
	//如果空间不足，扩容
	if (ps->size == ps->count) {
		int newcapacity = ps->count == 0 ? 4 : ps->count * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL) {
			perror("ListPushBack");
			exit(-1);
		}
		printf("扩容成功\n");
		
		ps->a = tmp;
		ps->count = newcapacity;
	}
	//输入数据
	ps->a[ps->size] = x;
	ps->size++;
}
//打印
void SepListPrintf(SL* ps) {
	int i = 0;
	for (i = 0; i < ps->size; i++) {
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
//删除
void SepListPopBack(SL* ps) {
	//assert(ps->size>0);方法1

	//方法2
	//if (ps->size > 0) {
	//	ps->a[ps->size - 1];//该程序尾部
	//	ps->size--;
	//}
	//方法3
	if (ps->size == 0) {
		printf("已无数据");
		perror("SepListPopBack");
		exit(-1);
	}
	ps->a[ps->size-1];//该程序尾部
	ps->size--;
	
}
//销毁
void SepListDestory(SL* ps) {
	free(ps->a);
	ps->a = NULL;
	ps->count = 0;
	ps->size = 0;
}
//前插
void SepListPushFront(SL* ps, SLDataType x ) {
	//如果空间不足，扩容
	if (ps->size == ps->count) {
		int newcapacity = ps->count == 0 ? 4 : ps->count * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL) {
			perror("ListPushBack");
			exit(-1);
		}
		printf("扩容成功\n");

		ps->a = tmp;
		ps->count = newcapacity;
	}
	//输入
	int end = ps->size - 1;
	while (end >=0) {
		ps->a[end + 1] = ps->a[end];
		end--;
		ps->a[0] = x;
		ps->size++;
	}
}
	