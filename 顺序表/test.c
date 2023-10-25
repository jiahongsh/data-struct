#include"SepList.h"
void SepListTest1() {
	SL s1;
	SepListPushInit(&s1);

	SepListPushBack(&s1, 1);
	SepListPushBack(&s1, 2);
	SepListPushBack(&s1, 3);
	SepListPushBack(&s1, 4);
	SepListPushBack(&s1, 5);
	SepListPushBack(&s1, 6);

	
	SepListPopBack(&s1);
	SepListPopBack(&s1);

	SepListPushFront(&s1, 4);

	SepListPrintf(&s1);

	SepListDestory(&s1);
}

int main() {
	
		SepListTest1();
	return 0;
}