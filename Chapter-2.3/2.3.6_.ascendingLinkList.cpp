#include "stdafx.h"

/********************王道2019年chapter-2.3 ，应用题第6题（P37）********************************
1、题目：
	有一个带头结点的单链表L，设计一个算法使其元素递增有序。
2、算法思想：  
	1°：
**********************************************************************************************/

void AscendingOrder(LinkList& L) {
	LNode* p = L->next, * pre;
	LNode* r = p->next;
	p->next = NULL;
	p = r;
	while (p) {
		r = p->next;
		pre = L;
		while (pre->next != NULL && pre->next->data < p->data) {
			pre = pre->next;
		}
		p->next = pre->next;
		pre->next = p;
		p = r;
	}
}