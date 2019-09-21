#include "stdafx.h"

/********************王道2019年chapter-2.3 ，应用题第6题（P37）********************************
1、题目：
	有一个带头结点的单链表L，设计一个算法使其元素递增有序。
2、算法思想：  
	1°：
**********************************************************************************************/

void AscendingOrder(LinkList& L) {
	LNode* p = L->next, * pre;
	LNode* r = p->next;  //r保存*P后继结点指针，以保证不断链
	p->next = NULL;     // 构造只含一个数据结点的有序表
	p = r;
	while (p) {
		r = p->next;    // 保存 * p的后继结点指针
		pre = L;
		while (pre->next != NULL && pre->next->data < p->data) {
			pre = pre->next;    //在有序表中查找插入*p的前驱结点*pre
		}
		p->next = pre->next;    //将*p插入到*pre之后
		pre->next = p;          //扫描原单链表中剩下的节点
		p = r;
	}
}