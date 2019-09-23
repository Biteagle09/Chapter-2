#include "stdafx.h"

/********************王道2019年chapter-2.3 ，应用题第9题（P37）********************************
1、题目：
	给定一个带表头结点的单链表，设head为头指针，结点的结构为（data，next），data为整型元素，next为指针，
	试写出算法：按递增次序输出单链表中各结点的数据元素，并释放结点所占的存储空间（要求：不允许使用数组作为辅助空间）。
2、算法思想：
	0°：核心思想：两个单链表有公共结点，也就是说两个链表从某一结点开始，它们的next都指向同一个结点。由于每个单链表结点只有一个next域，
				因此从第一个公共结点开始，之后它们所有的结点都是重合的，不可能再出现分叉。所以，两个有公共结点而部分重合的单链表，
				拓扑形状看起来像Y，而不可能像X。
	1°：先求出两个单链表的长度，假设他们长度差值为k,然后定义两个遍历指针P1和P2,找出他们长度较大的那个单链表，将其向后移动k个位置，以达到尾部对齐；
	2°：然后判断两个遍历指针的next是否相等，若相等，则返回这个节点及其之后的所有节点为其他们的公共节点

**********************************************************************************************/

void IncrementPrintLink(LinkList& L) {
	LNode* pre = L;
	LNode* p = pre->next;
	int min = p->data;
	while (p) {
		if (p->next->data < min) {
			
		}
	}
}



/*  先将单链表里的数据递增排序，排好序后在输出，最后删除这个链表
void IncrementPrintLink(LinkList& L) {
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
	LNode* q = L->next;
	
	while (q->next){
		printf_s("%d-->", q->data);
		q = q->next;
	}
	printf_s("%d", q->data);
	free(L);
}
*/