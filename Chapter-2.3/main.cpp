#include "stdafx.h"
#include "comm.h"
#define len 8
#define limit 100
static int arr[len];
// = {11,21,2,14,20}

//测试函数的声明
void test_231();
void test_232();
void test_233();
void test_234();
void test_235();

int main() {
	

	randMy(arr, len, limit); //生成随机测试数据
 	printArray(arr,len);
 	//printf("*************************上面是数组，下面是链表*************************\n\n");
	//test_231();
	//test_232();
	//test_233();
	//test_234();
	//test_235();
 	




	
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