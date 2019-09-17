#include "stdafx.h"


//1-1、创建一个单向链表的节点
LNode* createNode(int data) {
	LNode* newLNode = (LNode*)malloc(sizeof(LNode));
	if (newLNode){
		newLNode->data = data;
		newLNode->next = NULL;
	}
	return newLNode;
}



//1-2、创建一个双向链表的结点
DNode* createDNode(int data) {
	DNode* newDNode = (DNode*)malloc(sizeof(DNode));
	if (newDNode) {
		newDNode->data = data;
		newDNode->prior = NULL;
		newDNode->next = NULL;
	}
	return newDNode;
}



//2-1、创建一个带头结点的单向链式表*/
LinkList createLinkListH() {
	LinkList headNode = (LinkList)malloc(sizeof(LinkList));
	if (headNode) {
		headNode->next = NULL;
	}
	return headNode;
}


//2-2、创建一个不带头结点的单向链式表
LinkList** createLinkList() {
	LinkList **firstNode = (LinkList**)malloc(sizeof(LinkList**));
	if (firstNode){
		**firstNode = NULL;
	}
	return firstNode;
}



//2-3、创建一个带头结点的双向链表
DLinkList createDLinkList() {
	DLinkList headNode = (DLinkList)malloc(sizeof(DLinkList));
	if (headNode){
		headNode->next = NULL;
		headNode->prior = NULL;
	}
	return headNode;
};

//2-4、创建一个不带头结点的双向链表




//3-1、头插法向单链表里插入数据
void insertLNodeByHead(LinkList &L, int data) {
	LNode *newLNode = createNode(data);
	newLNode->next = L->next;
	newLNode->data = data;
	L->next = newLNode;
}



//3-2、尾插法向单链表里插入数据
void insertLNodeByTail(LinkList &L, int data){
	LNode *newNode = createNode(data);
	LNode *tailNode = L;
	while (tailNode->next) {
		tailNode = tailNode->next;
	}
	tailNode->next = newNode;
}


//3-3、头插法向双链表里插入数据
void insertDNodeByHead() {

}


//3-4、尾插法向双链表里插入数据
void insertDNodeByTail() {

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


