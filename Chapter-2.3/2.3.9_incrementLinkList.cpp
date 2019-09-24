#include "stdafx.h"

/********************王道2019年chapter-2.3 ，应用题第9题（P37）********************************
1、题目：
	给定一个带表头结点的单链表，设head为头指针，结点的结构为（data，next），data为整型元素，next为指针，
	试写出算法：按递增次序输出单链表中各结点的数据元素，并释放结点所占的存储空间（要求：不允许使用数组作为辅助空间）。
2、算法思想：
	方法(一)：
		遍历整个单链表，从头开始，两辆依次比较，如果是小于，则向后移动遍历指针，一次一趟下去，则会找到最小节点，将其删除即可；
	方法(二)：
		县将单链表排序，然后顺序输出，同时，依次删除

**********************************************************************************************/

void IncrementPrintLink_1(LinkList& L) {
	LNode *pre, *p, *u; 
	while (L->next) {
		pre = L;
		p = pre->next;
		while (p->next) {
			if (p->next->data < pre->next->data) {
				pre = p;
			}
			p = p->next;
		}
		if (L->next->next) {
			printf_s("%d-->", pre->next->data);
			u = pre->next;
			pre->next = u->next;
			free(u);
		}else {
			printf_s("%d\n", pre->next->data);
			u = pre->next;
			pre->next = u->next;
			free(u);
		}
		
	}
	L->next = NULL;
}



/*  先将单链表里的数据递增排序，排好序后在输出，最后删除这个链表*/
void IncrementPrintLink_2(LinkList& L) {
	LNode* p = L->next;
	LNode* pre;
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
	LNode* qre = L;
	LNode* q = qre->next;
	LNode* u;
	while (q->next) {
		printf_s("%d-->", q->data);
		u = qre->next;
		qre->next = u->next;
		q = q->next;
		free(u);
	}
	printf_s("%d\n", q->data);
	L->next = NULL;
	//free(L);
}
