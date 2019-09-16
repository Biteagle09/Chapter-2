#pragma once
#include "stdafx.h"

//some public function(ADT)
void randMy(int arr[], int count, int limit);
void increasingList(int arr[], int count, int start);
void printArray(int arr[], int len);
struct LNode* createNode(int data);
LinkList createLinkListH();
LinkList createLinkList();
void insertLNodeByHead(LinkList& L, int data);
void insertLNodeByTail(LinkList& L, int data);
void printLinkList(LinkList L);






//algorithm function 