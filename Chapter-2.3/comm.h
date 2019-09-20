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




//algorithm function 
extern void DeleteX(LinkList &L, int x);