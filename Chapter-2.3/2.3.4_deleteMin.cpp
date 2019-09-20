#include "stdafx.h"

/********************王道2019年chapter-2.3 ，应用题第4题（P37）********************************
1、题目：
	试编写在带头结点的单链表L中删除一个最小值结点的高效算法（假设最小值结点是唯一的）
2、算法思想：  [Function 1]
1°：新建4个遍历指针分别为，pre:始终指向p的前驱； minPre:始终指向min的前驱；p是遍历指针，min用来保存最小值节点；
2°：如果p->data < minP->data，则将p赋给minP，同时将pre赋给minPre；如果不小于，则将pre和p依次后移；
3°：删除minP；
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