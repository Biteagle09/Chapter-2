#include "stdafx.h"

/********************王道2019年chapter-2.3 ，应用题第17题（P38）********************************
1、题目：
	设计一个算法用于判断带头结点的循环双链表是否对称。
2、算法思想：
	1°：
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