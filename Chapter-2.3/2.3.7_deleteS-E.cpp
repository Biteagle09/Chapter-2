#include "stdafx.h"

/********************王道2019年chapter-2.3 ，应用题第7题（P37）********************************
1、题目：
	设在一个带表头结点的单链表中所有元素结点的数据值无序，试编写一个函数，删除表中所有介于给定的两个值（作为函数参数给出）之间的元素的元素（若存在）。
2、算法思想：
	1°：
**********************************************************************************************/

void DeleteS_E(LinkList& L, int start, int end) {
	if (start > end) {
		return;
	}
	LNode* pre = L;
	LNode* p = pre->next;
	while (p) {
		if (start < p->data && p->data < end) {
			pre->next = p->next;
			free(p);
			p = pre->next;
		}else {
			pre = p;
			p = p->next;
		}
	}
}
