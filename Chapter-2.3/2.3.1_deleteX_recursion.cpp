#include "stdafx.h"

/********************王道2019年chapter-2.3 ，应用题第1题（P37）********************************
1、题目：
	设计一个递归算法，删除不带头结点的单链表L中所有值为x的结点;
2、算法思想：
1°：设f(L，x）的功能是删除以L为首结点指针的单链表中所有值等于x的结点，则显然有f（L->next，x）的功能是删除以L->next为首结点指针的单链表中所有值等于x的结点。
	由此，可以推出递归模型如下；
2°：终止条件：f（L，x）=不做任何事情；                若L为空表；
3°：递归主体：f（L，x）=删除*L结点；fL->next，x）；   若L->data==x 
			 f（L，x）=f（L->next，x）；            其他情况；
**********************************************************************************************/

void DeleteXOfRecursion(LinkList &L, int x) {
	LNode* p;
	if (L ==  NULL) {
		return;
	}
	if (L->data == x) {
		p = L;
		L = L->next;
		free(p);
		DeleteXOfRecursion(L, x);
	}else{
		DeleteXOfRecursion(L->next,x);
	}
}