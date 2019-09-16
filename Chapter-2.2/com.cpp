#include "stdafx.h"
#define random(x) (rand()%x)

void merge(sqList& L, int low, int mid, int high);

//初始化结构体
void InitSqlist(sqList& sql) {
	sql.length = 0;
}



//Produce many random number
//param arr[] ： saving these random number in this arr[]
//param count :  The total number of random Numbers
//param limit :  The upper limit of these random Numbers
void randMy(int arr[], int count, int limit) {
	srand((int)time(0));
	for (int x = 0; x < count; x++) {
		arr[x] = random(limit);
	}
}



//向结构体的data数组里面初始化值，n为数组arr的长度
void InsertSqlistOfArray(sqList& sql, int n, int arr[]) {
	for (int i = 0; i < n; i++) {
		sql.data[i] = arr[i];
		sql.length++;
	}
}




//向控制台输出此结构体data域里的数据
void outputList(sqList L) {
	printf("data[%d]：", L.length);
	for (int i = 0; i < L.length; i++) {
		if (i < L.length - 1) {
			printf("%d,", L.data[i]);
		}
		else {
			printf("%d\n", L.data[i]);
		}
	}
}


/**
归并排序
*/
void mergeSort(sqList &L, int low, int high) {
	if (low < high) {
		int mid = (low + high) / 2;
		mergeSort(L, low, mid);       //归并排序前半段
		mergeSort(L, mid + 1, high);    //归并排序后半段
		merge(L, low, mid, high);    //将R数组中low~mid,mid~high两段序列归并为一个序列
	}
}

/**
将两个序列归并为一个有序序列
*/
void merge(sqList &L, int low, int mid, int high) {
	int i, j, k;
	int n1 = mid - low + 1;
	int n2 = high - mid;
	sqList left, right;
	left.length = n1, right.length = n2;
	for (i = 0; i < n1; i++) {
		left.data[i] = L.data[low + i];
	}
	for (j = 0; j < n2; j++) {
		right.data[j] = L.data[mid + 1 + j];
	}
	i = 0; j = 0; k = low;
	while (i < n1 && j < n2) {
		if (left.data[i] <= right.data[j]) {
			L.data[k] = left.data[i++];
		}
		else {
			L.data[k] = right.data[j++];
		}
		k++;
	}
	while (i < n1) {
		L.data[k++] = left.data[i++];
	}
	while (j < n2) {
		L.data[k++] = right.data[j++];
	}
}



sqList increasingList(int count, int start) {
	sqList sqli;

	srand((int)time(0));
	int starts = random(start);
	
	int end = starts + count;
	sqli.length = count;
	
	for (int i = starts, j = 0; i < end; i++) {
		sqli.data[j++] = i;
	}
	return sqli;
}
