#include "stdafx.h"

/********************王道2019年chapter-2.2 ，应用题第8题（P18）********************************
1、题目：
	已知在一维数组A[m+n]中依次存放着两个线性表（a1,a2,a3,....,am）和（b1,b2,b3,....,bn）;试编写一个函数，
	将数组中两个顺序表的位置互换，即将b1,b2,b3,....,bn）放在（a1,a2,a3,....,am）的前面。
	(Combine the two ordered sequence tables into a new ordered sequence table,
	and return the result sequence table by the function.)

2、算法思想：
1°：若传入的线性表为空，则返回-1，表示失败标志；
2°：首先将线性表[m+n]中的全部元素（a1,a2,a3,....,am,b1,b2,b3,....,bn）原地逆置为
	（bn,bn-1,bn-2,...,b1,am,am-1,am-2,....,a1），再对前n个元素和后m个元素分别使用逆置算法，
	就可以得到（b1,b2,b3,....,bn,a1,a2,a3,....,am），从而实现顺序表的位置互换。
3°：结束后，返回1表示成功的标志；
**********************************************************************************************/

int SwapSeat(sqList& L, int m) {
	if (L.length == 0 || m < 0) {
		return -1;
	}
	int temp;
	for (int i = 0, j = L.length-1; i < j; i++) {
		temp = L.data[i];
		L.data[i] = L.data[j];
		L.data[j--] = temp;
	}
	for (int i = 0, j = L.length - 1 - m; i <= j; i++) {
		temp = L.data[i];
		L.data[i] = L.data[j];
		L.data[j--] = temp;
	}
	for (int i = L.length - m, j = L.length - 1; i <= j; i++) {
		temp = L.data[i];
		L.data[i] = L.data[j];
		L.data[j--] = temp;
	}
	return 1;
}