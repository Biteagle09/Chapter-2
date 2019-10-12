#include "stdafx.h"

/********************王道2019年chapter-2.3 ，应用题第16题（P38）********************************
1、题目：
	两个整数序列A=a1，a2，a3，... ，am和B=b1，b2，b3，... ，bn已经存入两个单链表中，设计一个算法，判断序列B是否是序列A的连续子序列。
2、算法思想：
	1°：定义两个遍历指针pa和pb分别遍历A、B两个链表, 一个指针pre来时刻记录每次pa指针的前驱位置；
	2°：若他们的data域相等，则两个同时向后移动，继续遍历；
	3°：若他们的data域不相等，则将pa指针通过pre的记录，将pa回溯到pre.next位置后继续遍历，将pb指针回溯到B链表初始位置。
**********************************************************************************************/
bool isSubsequence(LinkList A, LinkList B) {

	LNode *pa = A->next, *pb = B->next;
	LNode *pre = pa;                                          //pre时刻记录着pa指针在A链表中遍历时的节点前驱

	while (pa && pb) {
		if (pa->data == pb->data) {                           //若他们的data域相等，则两个同时向后移动，继续遍历
			pa = pa->next;
			pb = pb->next;
		} else {                                              //若他们的data域不相等；
			pre = pre->next;                                  //则将pa指针回溯到上面进入if之前的位置的next位置；
			pa = pre;
			pb = B->next;                                     //同时将pb指针回到B链表的初始位置两个同时向后移动，继续遍历。
		}
	}

	if (pb) {
		return false;                                          //若在循环结束后pb没有遍历到B链表的最后一个位置，则说明B链表不是A链表的子序列
	} else {
		return true;
	}
}