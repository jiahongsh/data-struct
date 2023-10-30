#include"SList.h"
void test1() {
	SLTNode* plist = NULL;

	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);

	//¥Ú”°
	SListprintf(plist);
}
int main() {
	test1();

	
	return 0;
}