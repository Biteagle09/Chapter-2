#include "stdafx.h"
#include "comm.h"
#define len 10
#define limit 20
static int arr[len]= {12,34,45,46,12,34,12,56,20,12};
// 
//测试函数的声明
void test_231();

int main() {
	
 	//randMy(arr, len, limit); //生成随机测试数据
 	printArray(arr,len);
 	printf("*************************上面是数组，下面是链表*************************\n\n\n\n");
	test_231();
	






	
}

//题2.3.1_deleteX
void test_231() {
	LinkList L = createLinkListH();
	for (int i = 0; i < len; i++) {
		insertLNodeByTail(L, arr[i]);
	}
	printLinkList(L);
	DeleteX(L->next,12);
	printLinkList(L);
}