#include "stdafx.h"
void insertX(sqList& L, int index, int x);
/********************王道2019年chapter-2.2 ，应用题第9题（P18）********************************
1、题目：
	线性表（a1,a2,a3,....,an）中元素递增有序且按顺序存储于计算机内。要求设计一算法完成用最少时间在表中查找数值为x的元素，
	若找到将其与后继元素位置相交换，若找不到将其插入表中并使表中元素仍递增有序。

2、算法思想：
1°：若传入的线性表为空或者传入的操作数x正好是线性表最后一位数据元素，则返回-1，表示失败标志；
2°：  。
3°：结束后，返回1表示成功的标志；
**********************************************************************************************/


int OperationX(sqList &L, int x) {
	if (L.length == 0 || x == L.data[L.length - 1]) {
		return -1;
	}
	int i, temp, sub;
	int j = 0, nearX = abs(L.data[0] - x);
	for (i = 0; i < L.length; i++) {

		//若能找到x，则与其后继元素进行位置交换
		if (L.data[i] == x) {
			temp = L.data[i];
			L.data[i] = L.data[i + 1];
			L.data[i + 1] = temp;
			return 1;
		}

		//若x不在线性表里，则找到它该插入的位置
		sub = abs(x - L.data[i]);
		if (sub !=0 && sub < nearX) {
			nearX = sub;
			j = i;
		}
	}
	
	//说明没有这个数，那么，执行在此位置的插入操作,将j本身及之后所有的数依次后移
	L.length += 1;
	for (int i = L.length - 1; i > j; i--) {
		L.data[i] = L.data[i - 1];
	}
	if (x > L.data[j]) {
		L.data[j + 1] = x;
	}else {
		L.data[j] = x;
	}
	return 1;
}


