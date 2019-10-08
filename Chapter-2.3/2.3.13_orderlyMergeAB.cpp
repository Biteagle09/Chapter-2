#include "stdafx.h"

/********************王道2019年chapter-2.3 ，应用题第13题（P37）********************************
1、题目：
	假设有两个按元素值递增次序排列的线性表，均以单链表形式存储。请编写算法将这两个单链表归并为一个按元素值递减次序排列的单链表，
	并要求利用原来两个单链表的结点存放归并后的单链表。
2、算法思想：
	1°：用两个指针pa 和 pb来分别遍历A 和 B 链表；
	2°：因为A和B已是递增有序的，将A和B同时向后遍历；
	3°：若pa的值小于pb的值，则将pa头插到C链表中，同时将pa向后移动一个位置，pb保持不动；
	4°：若pa的值大于pb的值，则将pb头插到C链表中，同时将pb向后移动一个位置，pa保持不动；
	5°：若最后pa或pb遍历的链表还剩下元素，则将其头插到C链表即可。
**********************************************************************************************/
void mergeABToAB(LinkList &A, LinkList &B) {
	LNode *pa = A->next,  *pb = B->next;
	A->next = NULL;
	LNode *q;
	while (pa && pb) {
		if (pa->data < pb->data) {                   //若pa的值小于pb的值，则将pa头插到C链表中，同时将pa向后移动一个位置，pb保持不动
			q = pa->next;
			pa->next = A->next;
			A->next = pa;
			pa = q;
		}else {                                      //若pa的值大于pb的值，则将pb头插到C链表中，同时将pb向后移动一个位置，pa保持不动
			q = pb->next;
			pb->next = A->next;
			A->next = pb;
			pb = q;
		}
	}
	
	//若pa不为空
	if (pa) pb = pa;
	while (pb) {
		q = pb->next;
		pb->next = A->next;
		A->next = pb;
		pb = q;
	}
	free(pb);
}