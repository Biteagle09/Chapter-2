#include "stdafx.h"
int getLinkLen(LinkList L);
/********************王道2019年chapter-2.3 ，应用题第8题（P37）********************************
1、题目：
	给定两个单链表，编写算法找出两个链表的公共结点。
2、算法思想：
	0°：核心思想：两个单链表有公共结点，也就是说两个链表从某一结点开始，它们的next都指向同一个结点。由于每个单链表结点只有一个next域，
				因此从第一个公共结点开始，之后它们所有的结点都是重合的，不可能再出现分叉。所以，两个有公共结点而部分重合的单链表，
				拓扑形状看起来像Y，而不可能像X。
	1°：先求出两个单链表的长度，假设他们长度差值为k,然后定义两个遍历指针P1和P2,找出他们长度较大的那个单链表，将其向后移动k个位置，以达到尾部对齐；
	2°：然后判断两个遍历指针的next是否相等，若相等，则返回这个节点及其之后的所有节点为其他们的公共节点
**********************************************************************************************/

//方法（一）
LinkList FindPublicNode_1(LinkList L1, LinkList L2) {
	if (!(L1->next && L2->next)) {
		return NULL;            //判空
	}
	int lenL1 = getLinkLen(L1);  //求出啊L1和L2的长度
	int lenL2 = getLinkLen(L2);
	LNode* p1 = L1->next;        //初始化遍历指针P1和P2
	LNode* p2 = L2->next;
	LinkList L;                  //用来保存最终的公共链表

	int k, j = 0;               //k用来记录L1和L2的长度的差值，j用来记录长度较长的指针向后移动的个数
	if (lenL1 >= lenL2) {         
		k = lenL1 - lenL2;
		while (j++ != k) {
			p1 = p1->next;
		}
		while (p2->next != p1->next) {
			p1 = p1->next;
			p2 = p2->next;
		}
		L =  (LinkList)p2;
	}else {
		k = lenL2 - lenL1;
		while (j++ != k) {
			p2 = p2->next;
		}
		while (p2->next != p1->next) {
			p1 = p1->next;
			p2 = p2->next;
		}
		L = (LinkList)p1;
	}
	printf_s("k==%d", k);
	return L;
}




//方法（二）
LinkList FindPublicNode_2(LinkList L1, LinkList L2) {
	int len1 = getLinkLen(L1);
	int len2 = getLinkLen(L2);
	int dist;
	LinkList shortList, longList;
	if (len1 > len2) {
		longList = L1->next;
		shortList = L2->next;
		dist = len1 - len2;
	}else {
		longList = L2->next;
		shortList = L1->next;
		dist = len2 - len1;
	}

	while (dist--){
		longList = longList->next;
	}

	while (longList != NULL){
		if (longList->next == shortList->next) {
			return longList;
		}else{
			longList = longList->next;
			shortList = shortList->next;
		}
	}
	return NULL;
}









//求单链表的长度
int getLinkLen(LinkList L) {
	LNode* p = L->next;
	int len = 0;
	while (p) {
		p = p->next;
		len++;
	}
	return len;
}