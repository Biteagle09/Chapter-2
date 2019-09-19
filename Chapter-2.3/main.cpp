#include "stdafx.h"
#include "comm.h"
#define len 9
#define limit 100

int arr[len];

int main() {
	
	randMy(arr, len, limit);
	printArray(arr,len);
	printf("*************************上面是数组，下面是链表*************************\n\n");
	
	//LinkList L1 = createLinkListH();
	//for (int i = len - 1; i >= 0; --i) {
	//	insertLNodeByHead(L1, arr[i]);
	//}
	//printLinkList(L1);

	int Array[9] = { 72,43,62,60,44,16,1,27,94 };
	DLinkList L3 = createDLinkListH();
	for (int i = 0; i < 9; i++){
		insertDNodeByHead(L3, Array[i]);
	}
	printDLinkList(L3);
}