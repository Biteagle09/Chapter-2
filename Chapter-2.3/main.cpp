#include "stdafx.h"
#include "comm.h"
#define len 5
#define limit 20

int arr[len];

int main() {
	
 	randMy(arr, len, limit);
	printArray(arr, len);
	quickSort(arr,0,len-1);
 	printArray(arr,len);
 	printf("*************************上面是数组，下面是链表*************************\n\n\n\n");
	
	
}