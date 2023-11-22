#include"List.h"


void test() {
	SLTNode*plist=ListInit();

	ListPushFrint(plist, 1);
    ListPushBack(plist,2);

	Listprintf(plist);
}
int main() {
	test();
}

