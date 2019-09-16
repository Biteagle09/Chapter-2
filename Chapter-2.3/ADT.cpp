#include "stdafx.h"


//1、创建一个节点
struct LNode* createNode(int data) {
	LNode* newLNode = (LNode*)malloc(sizeof(LNode));
	if (newLNode){
		newLNode->data = data;
		newLNode->next = NULL;
	}
	return newLNode;
}



//2-1、创建一个带头结点的单向链式表
LinkList createLinkListH() {
	LinkList headNode = (LinkList)malloc(sizeof(LinkList));
	if (headNode) {
		headNode->next = NULL;
	}
	return headNode;
}


//2-2、创建一个不带头结点的单向链式表
LinkList createLinkList() {
	LinkList firstNode = (LinkList)malloc(sizeof(LinkList));
	if (firstNode) {
		firstNode = NULL;
	}
	return firstNode;
}


//3、头插法向链式线性表里插入数据
void insertLNodeByHead(LinkList &L, int data) {
	LNode *newLNode = createNode(data);
	newLNode->next = L->next;
	newLNode->data = data;
	L->next = newLNode;
}


//4、尾插法向链式表里插入数据
void insertLNodeByTail(LinkList &L, int data){
	LNode *newNode = createNode(data);
	LNode *tailNode = L;
	while (tailNode->next) {
		tailNode = tailNode->next;
	}
	tailNode->next = newNode;
}



//5、从头至尾打印链表
void printLinkList(LinkList L) {
	LNode* p = L->next;
	while (p->next) {
		printf("%d-->", p->data);
		p = p->next;
	}
	printf("%d\n", p->data);
}


