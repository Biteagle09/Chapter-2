#include "stdafx.h"
#define random(x) (rand()%x)


//1、创建一个节点
struct LNode* CreateNode(int data) {
	struct LNode* newLNode = (struct LNode*)malloc(sizeof(struct LNode));
	newLNode->data = data;
	newLNode->next = NULL;
	return newLNode;
}



//2、创建一个单向链式表
LinkList* CreateLinkList() {
	LNode* headNode = (LinkList)malloc(sizeof(LinkList*));
	headNode->next = NULL;
	return (LinkList*)headNode;
}


//3、头插法向链式线性表里插入数据
void InsertLNodeByHead(struct LNode *L, int data) {
	struct LNode *newLNode = CreateNode(data);
	newLNode->next = L->next;
	newLNode->data = data;
	L->next = newLNode;
}


//4、尾插法向链式表里插入数据
void InsertNodeByTail(struct LNode *L, int data){
	struct LNode *newNode = CreateNode(data);
	struct LNode* tailNode = L;
	while (tailNode) {
		tailNode = tailNode->next;
	}
	tailNode->next = newNode;
}