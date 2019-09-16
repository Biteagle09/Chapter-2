#include "stdafx.h"
#define random(x) (rand()%x)


//1������һ���ڵ�
struct LNode* CreateNode(int data) {
	struct LNode* newLNode = (struct LNode*)malloc(sizeof(struct LNode));
	newLNode->data = data;
	newLNode->next = NULL;
	return newLNode;
}



//2������һ��������ʽ��
LinkList* CreateLinkList() {
	LNode* headNode = (LinkList)malloc(sizeof(LinkList*));
	headNode->next = NULL;
	return (LinkList*)headNode;
}


//3��ͷ�巨����ʽ���Ա����������
void InsertLNodeByHead(struct LNode *L, int data) {
	struct LNode *newLNode = CreateNode(data);
	newLNode->next = L->next;
	newLNode->data = data;
	L->next = newLNode;
}


//4��β�巨����ʽ�����������
void InsertNodeByTail(struct LNode *L, int data){
	struct LNode *newNode = CreateNode(data);
	struct LNode* tailNode = L;
	while (tailNode) {
		tailNode = tailNode->next;
	}
	tailNode->next = newNode;
}