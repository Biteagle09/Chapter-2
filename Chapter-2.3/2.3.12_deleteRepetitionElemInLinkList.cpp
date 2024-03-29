#include "stdafx.h"

/********************王道2019年chapter-2.3 ，应用题第12题（P37）********************************
1、题目：
	在一个递增有序的线性表中，有数值相同的元素存在。若存储方式为单链表，设计算法去掉数值相同的元素，使表中不再有重复的元素。
	例如（7，10，10，21，30，42，42，42，51，70）将变作（7，10，21，30，42，51，70）。
2、算法思想：
	1°：因为是递增有序的链表，即重复的元素一定是连续出现的，所以用一个pre(始终指向p的前驱)和p指针来遍历整个链表；
	2°：若发现pre和p的data域相同时，则删除p的结点，同时保持pre指向不动，p继续后移；
	3°：若p和pre的data域不同时，则将pre和p同时向后移动，直到链表的最后，表中自然就剩下了所有的非重复元素。
**********************************************************************************************/
void deleteRepetitionElem(LinkList &L) {
	if (!(L && L->next && L->next->next) ) {
		printf("链表中只有一个元素或链表为空!!!\n");
		return;
	}
	LNode* pre = L, *p = L->next;
	while (p) {
		if (pre->data == p->data) {                          //若遇到重复元素，则删除后面的重复元素
			pre->next = p->next;
			//pre = p;
			p = p->next;
		}else {												 //不是重复元素，则p和pre同时向后遍历
			pre = p;
			p = p->next;
		}
	}
}