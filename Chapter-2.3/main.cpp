#include "stdafx.h"
#include "comm.h"
#define len 30
#define limit 1000
static int arr[len];
// = {1,2,3,6,4,5,45,6,4}

//测试函数的声明
//void test_231();
//void test_232();
//void test_233();
//void test_234();
//void test_235();
//void test_236();
//void test_237();
void test_238();


void main() {
	
	randMy(arr, len, limit); //生成随机测试数据
 	printArray(arr,len);
 	printf("*************************上面是数组，下面是链表*************************\n\n");
	//test_231();
	//test_232();
	//test_233();
	//test_234();
	//test_235();
	//test_236();
	//test_237();
	test_238();
	


}

//题2.3.1_deleteXOfRecursion
void test_231() {
	LinkList L = createLinkListH();
	for (int i = 0; i < len; i++) {
		insertLNodeByTail(L, arr[i]);
	}
	printLinkList(L);
	DeleteXOfRecursion(L->next,12);
	printLinkList(L);
}



//题2.3.2_deleteX
void test_232() {
	LinkList L1 = createLinkListH();
	LinkList L2 = createLinkListH();
	for (int i = 0; i < len; i++) {
		insertLNodeByTail(L1, arr[i]);
		insertLNodeByTail(L2, arr[i]);
	}
	DeleteX_1(L1, 6);
	printLinkList(L1);
 	printf("*************************上面是方法1，下面是方法2*************************\n");
 	DeleteX_2(L2, 6);
 	printLinkList(L2);
}




//题2.3.3_reverseOutput
void test_233() {
	LinkList L = createLinkListH();
	for (int i = 0; i < len; i++) {
		insertLNodeByTail(L, arr[i]);
	}
	ReverseOutput(L->next);
}



//题2.3.4_deleteMin
void test_234() {
	LinkList L = createLinkListH();
	for (int i = 0; i < len; i++) {
		insertLNodeByTail(L, arr[i]);
	}
	printLinkList(L);
	DeleteMin(L);
	printLinkList(L);
}



//题2.3.5_invertLinkList
void test_235() {
	LinkList L = createLinkListH();
	for (int i = 0; i < len; i++) {
		insertLNodeByTail(L, arr[i]);
	}
	printLinkList(L);
	InvertLink(L);
	printLinkList(L);
}


//题2.3.6_ascendingOrder
void test_236() {
	LinkList L = createLinkListH();
	for (int i = 0; i < len; i++) {
		insertLNodeByTail(L, arr[i]);
	}
	printLinkList(L);
	AscendingOrder(L);
	printLinkList(L);
}



//题2.3.7_delete_S-E
void test_237() {
	LinkList L = createLinkListH();
	for (int i = 0; i < len; i++) {
		insertLNodeByTail(L, arr[i]);
	}
	printLinkList(L);
	DeleteS_E(L,3,7);
	printLinkList(L);
}



//题2.3.8_FindPublicNode
void test_238() {

	LinkList L1 = createLinkListH();
	for (int i = 11; i < 20; i++) {
		insertLNodeByTail(L1, arr[i]);
	}


	LinkList L2 = createLinkListH();
	for (int i = 1; i < 7; i++) {
		insertLNodeByTail(L2, arr[i]);
	}


	LinkList L3 = createLinkListH();
	for (int i = 6; i < 10; i++) {
		insertLNodeByTail(L3, arr[i]);
	}


	LNode* p1 = L1;
	while (p1->next) {
		p1 = p1->next;
	}
	p1->next = L3->next;


	LNode* p2 = L2;
	while (p2->next) {
		p2 = p2->next;
	}
	p2->next = L3->next;

	printf_s("L1: ");
	printLinkList(L1);
	printf_s("\nL2: ");
	printLinkList(L2);
	printf_s("\nL3: ");
	printLinkList(L3);


	LinkList L_1 = FindPublicNode_1(L1, L2);
	LinkList L_2 = FindPublicNode_2(L1, L2);
	printf_s("\nPublic Node [L_1]: ");
	printLinkList(L_1);
	printf_s("\nPublic Node [L_2]: ");
	printLinkList(L_2);
}