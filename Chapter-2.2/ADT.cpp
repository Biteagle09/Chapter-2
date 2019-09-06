#include "stdafx.h"

//线性表的基本操作
/*
   //初始化线性表
   InitList(&L); ------>已在com.cpp文件里定义过
*/


//销毁线性表
int DestroyList(sqList *&L) {
	free(L);
	printf_s("sqList are destroied!!! \tlength==%d\n", L->length);
	return 1;
}


//将线性表重置为空
int ClearList(sqList &L) {
	L.length = 0;
	return 1;
}


//判断线性表示不是空的
bool ListIsEmpty(sqList L) {
	return L.length == 0;
}


//返回L中数据元素的个数
int ListLength(sqList L) {
	return sizeof(L.data) / L.data[0];
}


//用value返回线性表L中第index个数据元素的值，
bool GetElem(sqList L, int index, int &value) {
	if (index < 1 || index > L.length) {
		return false;
	}  
	value = L.data[index - 1];
	return true;
}


//删除L中第index个数据元素，并用e返回其值
bool ListDelete(sqList &L, int index, int &e) {
	if (index < 1 || index > L.length) {
		return false;
	}
	e = L.data[index - 1];
	for (int i = index - 1; i < L.length; i++) {
		L.data[i] = L.data[L.length - i - 1];
	}
	return true;
}