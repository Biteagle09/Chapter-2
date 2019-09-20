#include "stdafx.h"
#include "comm.h"
#define len 5
#define limit 10

int arr[len];

int main() {
	
// 	randMy(arr, len, limit);
// 	printArray(arr,len);
// 	printf("*************************上面是数组，下面是链表*************************\n\n\n\n");
	
	//LinkList L1 = createLinkListH();
	//for (int i = len - 1; i >= 0; --i) {
	//	insertLNodeByHead(L1, arr[i]);
	//}
	//printLinkList(L1);



	int Array[9] = { 72,43,62,60,44 };
	printArray(Array,len);
 	printf("*************************上面是数组，下面是链表*************************\n\n\n\n");

	DLinkList L3 = createDLinkListH();
	for (int i = 0; i < len; i++) {
		insertDNodeByHead(L3, Array[i]);
	}
	printDLinkList(L3);
	printDlinkListInvert(L3);

	printf("*************************上面是头插法，下面是尾插法*************************\n");
	DLinkList L4 = createDLinkListH();
	for (int i = 0; i < len; i++) {
		insertDNodeByTail(L4, Array[i]);
	}
	printDLinkList(L4);
	printDlinkListInvert(L4);
}