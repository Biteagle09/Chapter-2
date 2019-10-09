#include "stdafx.h"

/********************王道2019年chapter-2.3 ，应用题第14题（P37）********************************
1、题目：
	设A和B是两个单链表（带头结点），其中元素递增有序。设计一个算法从A和B中公共元素产生单链表C，要求不破坏A、B的结点。
2、算法思想：
	1°：分别为A、B链表设置两个遍历指针pa和pb，两个链表从头开始同时向后遍历；
	2°：若pa.data<pb.data，则将pa向后移动，若pb.data<pa.data,则将pb向后移动；
	3°：只有在pa.data和pb.data相等时，动态创建一个新节点q, 然后将当前pa或pb的值赋给一个q, 并将节点q尾插到C链表上。

**********************************************************************************************/
LinkList getPublicOfAB(LinkList A, LinkList B) {
	LNode *pa = A->next,  *pb = B->next,  *q,  *r;                     //pa 和 pb 是工作指针，r是C链表的尾指针，q是一个临时指针
	LinkList C = (LNode*)malloc(sizeof(LNode));
	C->next = NULL;                                                    //初始化一个带头结点的单链表C
	r = C;
	while (pa && pb) {
		if (pa->data < pb->data) {                                     //若pa.data<pb.data，则将pa向后移动
			pa = pa->next;
		} else if (pa->data > pb->data) {                              //若pb.data<pa.data,则将pb向后移动
			pb = pb->next;
		} else {                                                       //此时，pa.data == pb.data,进行新结点的创建和连接操作
			q = (LNode*)malloc(sizeof(LNode));
			q->data = pa->data;
			r->next = q;
			r = q;
			pa = pa->next;
			pb = pb->next;
		}
	}
	r->next = NULL;
	return C;
}