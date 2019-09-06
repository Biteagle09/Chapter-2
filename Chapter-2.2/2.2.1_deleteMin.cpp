#include "stdafx.h"

/********************王道2019年chapter-2.2 ，应用题第1题（P18）******************************** 
1、题目：
	从顺序表中删除具有最小值的元素（假设唯一），并由函数返回被删除的元素的值，空出的位置由最后一个元素填补，
	若顺序表为空，则显示出错误信息并退出；

2、算法思想：
1°：若传入的顺序表为空则返回错误表示；
2°：通过全盘扫面在这个线性表中找出最小值，并记录他的下标为minIndex；
3°：将线性表最后一个元素放到下表为minIndex的位置上，并把线性表长度-1；
**********************************************************************************************/

/*
@param L 顺序表L
@param min 找到的最小值
*/
int DeleteMin(sqList &L, int &min) {
	if (L.length == 0) {
		return -1;
	}
	min = L.data[0];
	int minIndex = 0;
	for (int i = 0; i < L.length; i++) {
		if (L.data[i] < min) {
			min = L.data[i];
			minIndex = i;
		}
	}
	L.data[minIndex] = L.data[L.length - 1];
	L.length--;
	return 1;
}