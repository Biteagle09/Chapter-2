#pragma once

#include "stdafx.h"

//some public function
extern void InitSqlist(sqList& sql);
extern void randMy(int arr[], int count, int limit);
extern void InsertSqlistOfArray(sqList& sql, int n, int arr[]);
extern void outputList(sqList L);
extern void mergeSort(sqList& L, int low, int high);
extern sqList increasingList(int count, int start);


//algorithm function 
extern int DeleteMin(sqList& L, int& min);
extern void InverseList(sqList& L, int& result);
extern int DeleteX(sqList& L, int x);
extern int Delete_s_t(sqList& L, int s, int t);
extern int Delete_s_t_ooo(sqList& L, int s, int t);
extern int DeleteRepatElem(sqList& L);
extern int MergeList(sqList L1, sqList L2, sqList& L);
extern int SwapSeat(sqList& L, int m);
extern int OperationX(sqList& L, int x);