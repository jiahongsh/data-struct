#include<stdio.h>
typedef   int   StyleData;
ThreadNode* pre = NULL;
typedef  struct ThreadNode {
	StyleData Data;
	ThreadNode* lchild;//左子树为前驱
	ThreadNode* rchild;//右子树为后继
	int ltag;//左标志位
	int rtag;//右标志位


}ThreadNode;


void visit(ThreadNode*q) {
	if (q->lchild == NULL) {//如果左子树为空，就把pre给予左子树，作为前驱
		q->lchild=pre;
		q->ltag=1;
	}

	if (pre != NULL && pre->rchild == NULL) {//前驱不为空，且此前驱的后继是空，就把当前的值给pre的后继
		pre->rchild = q;
		pre->rtag = 1;//标记标志位

	}
	pre = q;
}

void InThread(ThreadNode*T) {
	
	if (T != NULL) {//中序遍历的方法
		InThread(T->lchild);
		visit(T);
		InThread(T->rchild);
	}
		
}


void CreateThread(ThreadNode* T) {
	pre = NULL;
	if (T != 0) {
		InThread(T);
		if (pre->rchild == NULL) {//最后一个节点无后继，为空，标志位未处理
			pre->rtag = 1;
		}
	}
}