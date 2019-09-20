#include "stdafx.h"

/********************王道2019年chapter-2.3 ，应用题第4题（P37）********************************
1、题目：
	试编写在带头结点的单链表L中删除一个最小值结点的高效算法（假设最小值结点是唯一的）
2、算法思想：  [Function 1]
1°：；
2°：；
3°：；
**********************************************************************************************/

void DeleteMin(LinkList& L) {
	LNode* pre = L, *p = pre->next;
	LNode* minPre = pre, *minP = p;
	while (p) {
		if (p->data < minP->data) {
			minP = p;
			minPre = pre;
		}
		pre = p;
		p = p->next;
	}
	minPre->next = minP->next;
	free(minP);
}