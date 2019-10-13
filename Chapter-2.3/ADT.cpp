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
	DNode *newDNode = (DNode*)malloc(sizeof(DNode));
	if (newDNode){
		newDNode->prior = newDNode->next = NULL;
		newDNode->data = data;
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
DLinkList createDLinkListH() {
	DLinkList headNode = (DLinkList)malloc(sizeof(DNode));
	if (headNode){
		headNode->next = headNode->prior = NULL;
	}
	return headNode;
};



//2-4、创建一个不带头结点的双向链表
DLinkList* createDLinkList() {
	DLinkList *headNode = (DLinkList*)malloc(sizeof(DLinkList*));
	if (headNode) {
		headNode = NULL;
	}
	return headNode;
}



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
void insertDNodeByHead(DLinkList &DL, int data) {
	DNode *newNode = createDNode(data);
	newNode->next = DL->next;
	if (DL->next != NULL) {
		DL->next->prior = newNode;
	}
	DL->next = newNode;
	newNode->prior = DL;
}


//3-4、尾插法向双链表里插入数据
void insertDNodeByTail(DLinkList& DL, int data) {
	DNode* newNode = createDNode(data);
	DNode* tailNode = DL;
	while (tailNode->next){
		tailNode = tailNode->next;
	}
	tailNode->next = newNode;
	newNode->prior = tailNode;
}





//4-1、从头至尾打印单链表
void printLinkList(LinkList L) {
	LNode* p = L->next;
	if (p) {
		while (p->next) {
			printf("%d-->", p->data);
			p = p->next;
		}
		printf("%d\n", p->data);
	}else {
		printf("NULL\n");
	}
	
}


//4-1-1、从头至尾打印循环单链表
void printCycleLinkList(LinkList L) {
	LNode* p = L->next;
	if (p) {
		while (p->next != L) {
			printf("%d-->", p->data);
			p = p->next;
		}
		printf("%d\n", p->data);
	}
	else {
		printf("NULL\n");
	}
}







//4-2、从头至尾打印双链表
void printDLinkList(DLinkList DL) {
	DNode* p = DL->next;
	while (p->next) {
		printf("%d-->", p->data);
		p = p->next;
	}
	printf("%d\n", p->data);
}

//4-3、从尾至头部打印双链表
void printDlinkListInvert(DLinkList DL) {
	DNode* p = DL->next;
	while (p->next){
		p = p->next;
	}
	while (p->prior != DL){
		printf("%d-->", p->data);
		p = p->prior;
	}
	printf("%d\n",p->data);
}



//5-1、求一个单链表的长度
int getLinkLength(LinkList L) {
	LNode* p = L->next;
	int len = 0;
	while (p) {
		p = p->next;
		len++;
	}
	return len;
}