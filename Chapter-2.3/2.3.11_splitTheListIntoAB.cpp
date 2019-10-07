#include "stdafx.h"

/********************王道2019年chapter-2.3 ，应用题第11题（P37）********************************
1、题目：
	设C={al，b1，a2，b2，...，an，bn}为线性表，采用带头结点的hc单链表存放，设计一个就地算法，将其拆分为两个线性表，使得
	A={al，a2，...，an}，B={bn，...，b2，bl}。
2、算法思想：
	1°：

**********************************************************************************************/

LinkList splitIntoAB(LinkList &A) {
	LinkList B = (LinkList)malloc(sizeof(LNode));
	if (B) B->next = NULL;
	LNode *p = A->next, *q;
	LNode *ra = A;
	while (p != NULL) {
		ra->next = p;
		ra = p;
		p = p->next;
		q = p->next;
		p->next = B->next;
		B->next = p;
		p = q;
	}
	ra->next = NULL;
	return B;
}