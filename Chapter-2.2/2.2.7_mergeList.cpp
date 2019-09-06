#include "stdafx.h"

/********************王道2019年chapter-2.2 ，应用题第7题（P18）********************************
1、题目：
	将两个有序顺序表合并成一个新的有序顺序表，并由函数返回结果顺序表。
	(Combine the two ordered sequence tables into a new ordered sequence table, 
	and return the result sequence table by the function.)

2、算法思想：
1°：若传入的线性表为空，则返回-1，表示失败标志；
2°： 首先，按顺序不断取下两个顺序表表头较小的结点存入新的顺序表中。然后，看哪个表还有剩余，将剩下的部分加到新的顺序表后面。；
3°：结束后，返回1表示成功的标志；
**********************************************************************************************/

int MergeList(sqList L1, sqList L2, sqList &L) {
	L.length = 0;
	int i=0, j=0, k=0;
	int n = L1.length + L2.length;
	
	while (i < L1.length && j < L2.length) {
		if (L1.data[i] <= L2.data[j]) {
			L.data[k++] = L1.data[i++];
		}else {
			L.data[k++] = L2.data[j++];
		}
	}
	while (i < L1.length) {
		L.data[k++] = L1.data[i++];
	}
	while (j < L2.length) {
		L.data[k++] = L2.data[j++];
	}
	L.length = k;
	return 1;
}
