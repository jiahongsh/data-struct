#include<stdio.h>

typedef int TreeStyle;

typedef struct ThreadNode {
	TreeStyle data;
	ThreadTree* lchild;
	ThreadTree* rchild;
	TreeStyle ltag;
	TreeStyle rtag;
}ThreadTree;

ThreadTree * pre = NULL;//记录前置节点的变量
void visit(ThreadTree* T) {
	if (T->lchild == NULL) {
		T->lchild = pre;
		T->ltag = 1;
	}
	if (pre != NULL && pre->rchild == NULL) {
		pre->rchild = T;
		pre->rtag = 1;
	}
    pre=T;
}
//中序
void InThread(ThreadTree* T){//相当与中序遍历这个树
	if (T!= NULL) {
		//根据左根右的方式
		InThread(T->lchild);
		visit(T);
		InThread(T->rchild);

	}
}

void CreateInThread(ThreadTree* T) {
	if ( T== NULL) {
		return 0;
	}
	//该树不为空树时，进行访问
	InThread(T);
    if(pre->rchild==NULL){
        pre->rtag=1;
    }
}

