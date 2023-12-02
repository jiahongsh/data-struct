#include<stdio.h>
typedef int  BiTStyle;


void visit(BiTNode* T) {
	printf(T->data);
}

typedef struct BiTNode {
	BiTStyle data;
	BiTNode* lchild;
	BiTNode* rchild;
}BiTNode;

//根据 先中左右
void PreOrder(BiTNode* T) {
	if (T->data != NULL) {
		visit(T);
		PreOrder(T->lchild);
		PreOrder(T->rchild);
	}
}