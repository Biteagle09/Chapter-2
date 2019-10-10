#include "stdafx.h"

/********************王道2019年chapter-2.3 ，应用题第15题（P37）********************************
1、题目：
	已知两个链表A和B分别表示两个集合，其元素递增排列。编制函数，求A与B的交集，并存放于A链表中。
2、算法思想：
	1°：定义两个指针pa 和 pb 来扫描A链表和B链表；
	2°：若在扫描时发现他们所指向的data域值相等，则将其尾插到A链表里，然后将pa和pb同时后移；
	3°：若pa.data < pb.data ,则将pa向后移动，pb位置保持不变，若pa.data > pb.data ,则将pb向后移动，pa位置保持不变;
	4°：遍历结束后，若有其中一个链表内有剩余的元素，则将他全部删除即可
**********************************************************************************************/
LinkList getIntersectionOfAB(LinkList &A, LinkList &B) {
	
	LNode *pa = A->next,  *pb = B->next;            //遍历指针pa 和 pb
	LNode *ra = A;                                  //A 链表的尾指针
	LNode *u;                                       //用来释放指针指向的节点

	while (pa && pb) {
		if (pa->data == pb->data) {                 //pa 和pb指向的data相等时，将当前节点尾插到A链表，并释放这两个节点
			ra->next = pa;
			ra = pa;
			pa = pa->next;
			u = pb;
			pb = pb->next;
			free(u);
		}else if (pa->data < pb->data) {                 //将pa后移一位，pb保持位置不变,并释放pa指向的节点
			u = pa;
			pa = pa->next;
			free(u);
		}else {                 //将pb后移一位，pa保持位置不变,并释放pb指向的节点
			u = pb;
			pb = pb->next;
			free(u);
		}
	}

	if(pa) pb = pa;                                //若条件成立，则说明pa中有剩余节点，pb已经是空的；若不成立，则反之

	while (pb) {
		u = pb;
		pb = pb->next;
		free(u);
	}
	ra->next = NULL;
	return A;
}