#include "stdafx.h"
#include "comm.h"
#define len 9
#define limit 100

sqList sqli;
int arr[len];  //支持最大数1310680


//每道题一个测试方法在此处声明
void befores();
//void test_221();
//void test_222();
//void test_223();
//void test_224();
//void test_225();
//void test_226();
//void test_227();
//void test_228();
void test_229(int x, int s, int e);

int main() {
	//befores();  //测试之前的所有初始化，包括 initial，create random，insert data；


/*******此处开始为chapter-2.2里的所有题目测试方法*******************/
	//test_221();
	//test_222();
	//test_223();
	//test_224();
	//test_225();
	//test_226();
	//test_227();
	//test_228();

	int i = 0,j = 10, k = 30;
	while (i++ < 20) {
		printf_s("------------------------------------------------------------------------\n");
		test_229(5,9,10);
		printf_s("\n\n***************************************************************************\n\n");
		Sleep(1000);
	}
	

	return 0;
}


//before in test
void befores() {
	//  1、初始化结构体
	InitSqlist(sqli);

	//  2、生成一些本次测试用到的随机数
	randMy(arr, len, limit);

	int arr1[] = {1,3,5,7,8,9,10,11,13,17,19,32};
	//  3、将这些随机数赋值到sqList的data域里
	InsertSqlistOfArray(sqli, len, arr);
}



//题2.2.1
void test_221() {
	outputList(sqli);
	int min = 0;
	int flag = DeleteMin(sqli, min);
	printf("The flag=%d, The min==%d\n", flag, min);
	outputList(sqli);
}



//题2.2.2
void test_222() {
	outputList(sqli);
	int result = 0;
	InverseList(sqli, result);
	printf("result==%d%s\n", result, "**************************************************");
	outputList(sqli);
}


//题2.2.3
void test_223() {
	outputList(sqli);
	int x = 3;
	int flag = DeleteX(sqli,x);
	printf("The flag==%d,  the x==%d\n",flag,x);
	outputList(sqli);
}



//题2.2.4
void test_224() {
	outputList(sqli);
	int s = 0, t = 5;
	int flag = Delete_s_t(sqli, s, t);
	printf("The flag==%d,  the s==%d, d==%d\n", flag, s,t);
	outputList(sqli);
}


//题2.2.5
void test_225() {
	outputList(sqli);
	int s = 0, t = 8;
	int flag = Delete_s_t_ooo(sqli, s, t);
	printf("The flag==%d,  the s==%d, d==%d\n", flag, s, t);
	outputList(sqli);
}



//题2.2.6
void test_226() {
	outputList(sqli);
	int flag = DeleteRepatElem(sqli);
	printf("The flag==%d\n", flag);
	outputList(sqli);
}



//题2.2.7
void test_227() {

	sqList sqli1, sqli2;

	InitSqlist(sqli1);
	int arr1[] = {1,3,5,7,8,9,10,11,17,19,32};
	InsertSqlistOfArray(sqli1, sizeof(arr1)/sizeof(arr1[0]), arr1);
	printf_s("sqli1: ");
	outputList(sqli1);


	InitSqlist(sqli2);
	int arr2[] = {0,2,4,6,15,18,20,21,22,23,26,30,31};
	InsertSqlistOfArray(sqli2, sizeof(arr2) / sizeof(arr2[0]), arr2);
	printf_s("sqli2: ");
	outputList(sqli2);

	int flag = MergeList(sqli1,sqli2,sqli);
	printf("The flag==%d\n", flag);
	outputList(sqli);
}



//题2.2.8
void test_228() {
	int m = 4;
	outputList(sqli);
	int flag = SwapSeat(sqli,m);
	printf("The flag==%d,  m==%d\n", flag,m);
	outputList(sqli);
}



//题2.2.9
void test_229(int x, int s, int e) {
	//int x = 2;
	sqList sq = increasingList(s,e);
	outputList(sq);
	int flag = OperationX(sq, x);
	printf("The flag==%d,  x==%d\n", flag, x);
	outputList(sq);
}