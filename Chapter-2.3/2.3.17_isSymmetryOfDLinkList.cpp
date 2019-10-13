#include "stdafx.h"

/********************王道2019年chapter-2.3 ，应用题第17题（P38）********************************
1、题目：
	设计一个算法用于判断带头结点的循环双链表是否对称。
2、算法思想：
	1°：定义两个指针p、pri，初始时分别指向双循环链表的next节点和prior节点；
	2°：若pri指针的data域和p->nex的data域相等，则将pri继续向前移动一个，p继续向后移动一个；若不相等，则不满足中心对称，直接返回false；
	3°：因为是循环链表，所以判断一趟遍历完成的条件是： pri != p && pri->next != p
**********************************************************************************************/
bool isSymmetryDLink(CDLinkList CDL) {
	CDNode *pri = CDL->prior;
	CDNode *p = CDL->next;
	while (pri != p && pri->next != p) {
		if (pri->data == p->data) {
			pri = pri->prior;
			p = p->next;
		} else {
			return false;
		}
	}
	return true;
}