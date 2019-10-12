#include "stdafx.h"
#include "comm.h"
#define len 7
#define limit 100
static int arr[len];
// = {1,2,3,6,4,5,45,6,4}
// = {7,10,10,21,30,42,42,42,51,70}

//测试函数的声明
//void test_231();
//void test_232();
//void test_233();
//void test_234();
//void test_235();
//void test_236();
//void test_237();
//void test_238();
//void test_239();
//void test_2310();
//void test_2311();
//void test_2312();
//void test_2313();
//void test_2314();
//void test_2315();
void test_2316();
//void test_2317();
//void test_2318();
//void test_2319();
//void test_2320();
//void test_2321();
//void test_2322();
//void test_2323();



int main() {
	
	//randMy(arr, len, limit); //生成随机测试数据
 	//printArray(arr,len);
 	printf("^#*************************上面是数组,下面是链表*************************^#\n\n");
	//test_231();
	//test_232();
	//test_233();
	//test_234();
	//test_235();
	//test_236();
	//test_237();
	//test_238();
	//test_239();
	//test_2310();
	//test_2311();
	//test_2312();
	//test_2313();
	//test_2314();
	//test_2315();
	test_2316();
	

	return 0;
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
 	printf("*************************上面是方法1,下面是方法2*************************\n");
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
	//for (int i = 11; i < 20; i++) {
	//	insertLNodeByTail(L1, arr[i]);
	//}


	LinkList L2 = createLinkListH();
	//for (int i = 11; i < 17; i++) {
	//	insertLNodeByTail(L2, arr[i]);
	//}


	LinkList L3 = createLinkListH();
	for (int i = 1; i < 7; i++) {
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



//题2.3.9_increment output LinkList
void test_239() {
	LinkList L1 = createLinkListH();
	LinkList L2 = createLinkListH();
	for (int i = 0; i < len; i++) {
		insertLNodeByTail(L1, arr[i]);
		insertLNodeByTail(L2, arr[i]);
	}
	printLinkList(L1);
	IncrementPrintLink_1(L1);
	printf_s("Last :\n");
	printf("*************************上面是方法1,下面是方法2*************************\n");
	printLinkList(L2);
	IncrementPrintLink_2(L2);
	printf_s("Last :\n");
	//printLinkList(L);
}




//题2.3.10_split LinkList
void test_2310() {
	LinkList La1 = createLinkListH();
	LinkList Lb1 = createLinkListH();
	LinkList La2 = createLinkListH();
	LinkList Lb2 = createLinkListH();

	for (int i = 0; i < len; i++) {
		insertLNodeByTail(La1, arr[i]);
		insertLNodeByTail(La2, arr[i]);
	}
	//printLinkList(La1);
	//printf_s("***************************上面是原来的链表,下面是分割后的链表************\n\n");
	SplitLink_1(La1, Lb1);
	printf_s("LA: ");
	printLinkList(La1);
	printf_s("LB: ");
	printLinkList(Lb1);
	printf_s("***************************上面是方法(一),下面是方法(二)************\n");
	SplitLink_2(La2, Lb2);
	printf_s("LA: ");
	printLinkList(La2);
	printf_s("LB: ");
	printLinkList(Lb2);
}



//题2.3.11   split the LInkList into A and B
void test_2311() {
	LinkList A1 = createLinkListH();
	LinkList A2 = createLinkListH();
	for (int i = 0; i < len; i++) {
		insertLNodeByTail(A1, arr[i]);
		insertLNodeByTail(A2, arr[i]);
	}
	printf("初始链表: ");
	printLinkList(A1);

	LinkList B1 = splitIntoAB_1(A1);
	printf("\n方法1:\n   LinkList[A1]:");
	printLinkList(A1);
	printf("   LinkList[B1]:");
	printLinkList(B1);

	LinkList B2 = splitIntoAB_2(A2);
	printf("方法2:\n   LinkList[A2]:");
	printLinkList(A2);
	printf("   LinkList[B2]:");
	printLinkList(B2);
}




//题2.3.12 delete repetition element in LinkList
void test_2312() {
	LinkList L = createLinkListH();
	// 7,10,10,21,30,42,42,42,51,70
	int arr1[] = { 7,10,10,21,30,42,42,42,51,70 };
	int lens = sizeof(arr1) / sizeof(arr1[0]);
	for (int i = 0; i < lens; i++) {
		insertLNodeByTail(L, arr1[i]);
	}

	printf("初始链表: \n   ");
	printLinkList(L);
	deleteRepetitionElem(L);
	printf("去重后的链表: \n   ");
	printLinkList(L);
}




/*题2.3.13 */
void test_2313() {
	LinkList A = createLinkListH();
	LinkList B = createLinkListH();
	int arrA[] = { 2,3,4,5,9,11 };;
	int arrB[] = { 4,7,12,13 };
	int lenA = sizeof(arrA) / sizeof(arrA[0]);
	int lenB = sizeof(arrB) / sizeof(arrB[0]);
	for (int i = 0; i < lenA; i++) {
		insertLNodeByTail(A, arrA[i]);
	}
	for (int i = 0; i < lenB; i++) {
		insertLNodeByTail(B, arrB[i]);
	}
	printf("LinkList[A]: ");
	printLinkList(A);
	printf("LinkList[B]: ");
	printLinkList(B);

	mergeABToAB(A, B);
	printf("Merge[A-B] : ");
	printLinkList(A);

}




/*题2.3.14 */
void test_2314() {
	LinkList A = createLinkListH();
	LinkList B = createLinkListH();
	int arrA[] = { 1,2,3,4,5,6,9,11,12,13,14,16,17,19,28};
	int arrB[] = { 2,4,6,7,9,12,13,17 };
	int lenA = sizeof(arrA) / sizeof(arrA[0]);
	int lenB = sizeof(arrB) / sizeof(arrB[0]);
	for (int i = 0; i < lenA; i++) {
		insertLNodeByTail(A, arrA[i]);
	}
	for (int i = 0; i < lenB; i++) {
		insertLNodeByTail(B, arrB[i]);
	}
	printf("LinkList[A]: ");
	printLinkList(A);
	printf("LinkList[B]: ");
	printLinkList(B);

	LinkList C = getPublicOfAB(A, B);
	printf("getPublicOfAB[C] : ");
	printLinkList(C);
}





/*题2.3.15 */
void test_2315() {
	LinkList A = createLinkListH();
	LinkList B = createLinkListH();
	int arrA[] = { 1,2,3,4,5,6,9,11,12,13,14,16,17,19,28 };
	int arrB[] = { 2,4,6,7,9,12,13,17 };
	int lenA = sizeof(arrA) / sizeof(arrA[0]);
	int lenB = sizeof(arrB) / sizeof(arrB[0]);
	for (int i = 0; i < lenA; i++) {
		insertLNodeByTail(A, arrA[i]);
	}
	for (int i = 0; i < lenB; i++) {
		insertLNodeByTail(B, arrB[i]);
	}
	printf("LinkList[A]: ");
	printLinkList(A);
	printf("LinkList[B]: ");
	printLinkList(B);

	
	LinkList C = getIntersectionOfAB(A, B);
	printf("getPublicOfAB[C] : ");
	printLinkList(C);
}



/*题2.3.16 判断序列B是否是序列A的连续子序列*/
void test_2316() {
	LinkList A = createLinkListH();
	LinkList B = createLinkListH();
	int arrA[] = { 1,2,3,4,5,6,9,11,12,13,14,16,17,19,28 };
	int arrB[] = { 6,9,11,12,13 };
	int lenA = sizeof(arrA) / sizeof(arrA[0]);
	int lenB = sizeof(arrB) / sizeof(arrB[0]);
	for (int i = 0; i < lenA; i++) {
		insertLNodeByTail(A, arrA[i]);
	}
	for (int i = 0; i < lenB; i++) {
		insertLNodeByTail(B, arrB[i]);
	}
	printf("LinkList[A]: ");
	printLinkList(A);
	printf("LinkList[B]: ");
	printLinkList(B);


	if (isSubsequence(A, B)) {
		printf("B is a subsequence of A!!!\n");
	}else {
		printf("B is not a subsequence of A!!!\n");
	};
	
}




/*题2.3.17 */
void test_2317() {
	DLinkList DL = createDLinkListH();
	
	isSymmetryDLink(DL);
}



/*题2.3.18 */
void test_2318() {
	LinkList A = createLinkListH();
	LinkList B = createLinkListH();

	jointAB(A, B);
}



/*题2.3.19 */
void test_2319() {
	LinkList L = createLinkListH();

	asecdingOutPut(L);
}



/*题2.3.20 */
void test_2320() {
	DLinkList DL = createDLinkListH();

	sortByLocate(DL);
}




/*题2.3.21 */
void test_2321() {

}




/*题2.3.22 */
void test_2322() {

}




/*题2.3.23 */
void test_2323() {

}