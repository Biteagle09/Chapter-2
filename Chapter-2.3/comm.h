#pragma once
#include "stdafx.h"

//some public function(ADT)
void randMy(int arr[], int count, int limit);
void increasingList(int arr[], int count, int start);
void printArray(int arr[], int len);
LNode* createNode(int data);
DNode* createDNode(int data);
LinkList createLinkListH();
LinkList createLinkList();
DLinkList createDLinkListH();
LinkList** createDLinkList();
void insertLNodeByHead(LinkList& L, int data);
void insertLNodeByTail(LinkList& L, int data);
void insertDNodeByHead(DLinkList& DL, int data);
void insertDNodeByTail(DLinkList& DL, int data);
void printLinkList(LinkList L);
void printDLinkList(DLinkList DL);
void printDlinkListInvert(DLinkList DL);
void quickSort(int arr[], int low, int high);
int getLinkLength(LinkList L);



//algorithm function 
extern void DeleteXOfRecursion(LinkList& L, int x);  //题2.3.1
extern void DeleteX_1(LinkList& L, int x);  //题2.3.2
extern void DeleteX_2(LinkList& L, int x);  //题2.3.2
extern void ReverseOutput(LinkList L);  //题2.3.3
extern void DeleteMin(LinkList& L);  //题2.3.4
extern void InvertLink(LinkList& L);  //题2.3.5
extern void AscendingOrder(LinkList& L);  //题2.3.6
extern void DeleteS_E(LinkList& L, int start, int end);  //题2.3.7
extern LinkList FindPublicNode_1(LinkList L1, LinkList L2);  //题2.3.8
extern LinkList FindPublicNode_2(LinkList L1, LinkList L2);  //题2.3.8
extern void IncrementPrintLink(LinkList& L);  //题2.3.9