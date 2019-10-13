#include "stdafx.h"

/********************王道2019年chapter-2.3 ，应用题第19题（P38）********************************
1、题目：
	设有一个带头结点的循环单链表，其结点值均为正整数。设计一个算法，反复找出单链表中结点值最小的结点并输出，
	然后将该结点从中删除，直到单链表空为止，再删除表头结点。
2、算法思想：
	1°：定义pre和p指针分别为遍历指针的前驱和遍历指针；定义minpre和minp指针为当前遍历出的节点中的最小值的前驱和最小值节点
	2°：找到最小值节点后将其删除即可
**********************************************************************************************/
void asecdingOutPut(LinkList &L) {
	LNode *pre, *p, *minpre, *minp;
	while (L->next != L) {
		p = L->next;
		pre = L;
		minp = p;
		minpre = pre;
		while (p != L) {
			if (p->data < minp->data) {
				minp = p;
				minpre = pre;
			}
			pre = p;
			p = p->next;
		}
		printf("%d-->", minp->data);
		minpre->next = minp->next;
		free(minp);
		
	}
	printf("\n");
}