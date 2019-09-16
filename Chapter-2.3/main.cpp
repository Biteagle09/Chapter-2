#include "stdafx.h"
#include "comm.h"
#define len 9
#define limit 100

int arr[len];

int main() {
	
	randMy(arr, len, limit);
	printArray(arr,len);
	printf("*************************上面是数组，下面是链表*************************\n\n");
	
	LinkList L1 = createLinkListH();
	for (int i = len - 1; i >= 0; --i){
		insertLNodeByHead(L1, arr[i]);
	}
	printLinkList(L1);

	printf("*************************上面是头插法，下面是尾插法*************************\n");

	LinkList L2 = createLinkListH();
	for (int i = len - 1; i >= 0; --i) {
		insertLNodeByTail(L2, arr[i]);
	}
	printLinkList(L2); printf("\n\n\n");


	increasingList(arr, len, 100);
	printArray(arr,len);
}