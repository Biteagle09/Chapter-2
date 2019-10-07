#include "stdafx.h"

/********************王道2019年chapter-2.3 ，应用题第11题（P37）********************************
1、题目：
	设C={al，b1，a2，b2，...，an，bn}为线性表，采用带头结点的hc单链表存放，设计一个就地算法，将其拆分为两个线性表，使得
	A={al，a2，...，an}，B={bn，...，b2，bl}。
2、算法思想：
	1°：用P指针来遍历整个链表，若是奇数序号元素则尾插到A链表中，偶数序号则头插到B链表中

**********************************************************************************************/

/*方法1*/
LinkList splitIntoAB_1(LinkList& A) {
	LinkList B = (LinkList)malloc(sizeof(LNode));
	if (B) B->next = NULL;					//初始化B链表为空链表

	LNode* p = A->next, * q;				//p 是遍历指针，q用来临时保存在头插法时的p指针
	LNode* ra = A;							//ra 是A链表的尾指针，
	A->next = NULL;
	int cursor = 0;							//游标，用来标记当前节点是偶数号或奇数号
	while (p) {
		cursor++;
		if (cursor % 2 == 1) {				//奇数号节点，则尾插到A链表
			ra->next = p;
			ra = p;
			p = p->next;
		}
		else {								//偶数号节点，则头插到B链表
			q = p->next;					//一定先保存下p指针的状态，此时，P = p.next, while循环外无需再将p向后移动
			p->next = B->next;
			B->next = p;					//将上面用q保存下来的p的状态再还给p
			p = q;
		}
	}
	ra->next = NULL;
	return B;
}



/*方法2*/
LinkList splitIntoAB_2(LinkList& A) {
	LinkList B = (LinkList)malloc(sizeof(LNode));
	if (B) B->next = NULL;					//初始化B链表为空链表

	LNode* p = A->next, * q;				//p 是遍历指针，q用来临时保存在头插法时的p指针
	LNode* ra = A;							//ra 是A链表的尾指针，
	A->next = NULL;
	while (p) {
		ra->next = p;                      //尾插法向A插入节点
		ra = p;

		p = p->next;                       //插完后，向后移动p指针，此时到偶数号节点，则头插到B链表
		if (!p) break;				       //
		q = p->next;					   //一定先保存下p指针的状态，此时，P = p.next, while循环外无需再将p向后移动
		p->next = B->next;
		B->next = p;					   //将上面用q保存下来的p的状态再还给p
		p = q;

	}
	ra->next = NULL;
	return B;
}