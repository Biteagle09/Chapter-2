#include "stdafx.h"

/********************王道2019年chapter-2.3 ，应用题第18题（P38）********************************
1、题目：
	有两个循环单链表，链表头指针分别为hl和h2，编写一个函数将链表h2链接到链表h1之后，要求链接后的链表仍保持循环链表形式。
2、算法思想：
	1°：找到A链表和B链表的尾指针；
	2°：将B链表的首元素连接在A链表之后；
**********************************************************************************************/
void jointAB(LinkList &A, LinkList &B) {
	LNode *pa = A,  *pb = B;
	while (pa->next != A) {
		pa = pa->next;
	}

	while (pb->next != B) {
		pb = pb->next;
	}
	pa->next = B->next;
	pb->next = A;
}