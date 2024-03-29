#include "stdafx.h"

/********************王道2019年chapter-2.3 ，应用题第10题（P37）********************************
1、题目：
	将一个带头结点的单链表A分解为两个带头结点的单链表A和B，使得A表中含有原表中序号为奇数的元素，
	而B表中含有原表中序号为偶数的元素，且保持其相对顺序不变。
2、算法思想：
	1°：设置一个访问序号变量（初值为0），每访问一个结点序号自动加1，然后根据序号的奇偶性将结点插入到A表或B表中。重复以上操作直到表尾。
3、拓展延申：
	为了保持原来结点中的顺序，本题采用尾插法建立单链表。此外，本算法完全可以不用设置序号变量。while循环中的代码改为将结点插入到表A中和将下一结点插入到表B中，
	这样while中第一处理的结点就是奇数号结点，第二处理的结点就是偶数号结点。

**********************************************************************************************/


/*
算法思想：
设置一个计数变量i, 每访问一个节点使其自增，根据i的奇偶性将当前节点分别连到不同的链表上；
通过尾插法的方法将对应节点连接成两个链表。
*/
void SplitLink_1(LinkList &A, LinkList &B) {
	int i = 0;                 //计数变量
	LNode *ra = A, *rb = B;   //尾插法插入，尾指针
	LNode *p = A->next;       //遍历指针
	A->next = NULL;           //置空A链表

	while (p) {
		i++;
		if (i % 2 == 0) {
			rb->next = p;
			rb = p;
		}else {
			ra->next = p;
			ra = p;
		}
		p = p->next;
	}
	ra->next = NULL;
	rb->next = NULL;
}




/**
 * 算法思想：
		本算法完全可以不用设置序号变量。
		while循环中的代码改为将结点插入到表A中和将下一结点插入到表B中，
		这样while中第一处理的结点就是奇数号结点，第二处理的结点就是偶数号结点。
 */
void SplitLink_2(LinkList& A, LinkList& B) {
	LNode *ra = A, *rb = B;
	LNode *p = A->next;
	A->next = NULL;
	while (p) {
		ra->next = p;
		ra = p;
		p = p->next;
		rb->next = p;
		rb = p;
		if (!p) break;
		p = p->next;
	}
	ra->next = NULL;
	rb->next - NULL;
}