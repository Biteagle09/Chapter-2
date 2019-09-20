#include "stdafx.h"

/********************王道2019年chapter-2.3 ，应用题第3题（P37）********************************
1、题目：
	设L为带头结点的单链表，编写算法实现从尾到头反向输出每个结点的值。
2、算法思想：  [Function 1]
1°：用p从头至尾扫描单链表，pre指向p结点的前驱；
2°：若p所指结点的值为x，则删除，并让p移向下一个结点；
3°：否则让pre、p指针同步后移一个结点。；
**********************************************************************************************/

void ReverseOutput(LinkList L) {
	if (L->next) {
		ReverseOutput(L->next);
	}
	printf("%d-->", L->data);
}