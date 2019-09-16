#pragma once
#define MaxSize 10000

// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "stdio.h"
#include "tchar.h"
#include "Windows.h"
#include <cstdio>
#include <ctime>
#include <cmath>


/*
注意这里的string与cstring中的使用差别，
在定义与使用cout输出string类型字符串的时候，最好使用string库，
否则可能会出现乱码以及错误等一系列错误
*/
#include <string>    



// TODO:  在此处引用程序需要的其他头文件





//线性表链式结构体的定义
//单链表
typedef struct LNode {
	int data;
	struct LNode *next;;
}LNode, *LinkList;



//双链表
typedef struct DNode {
	int data;
	struct DNode* prior; //前驱指针
	struct DNode* next;  //后继指针
}DNode, *DLinkList;



//静态链表
typedef struct StNode {
	int data;
	int next;
}SLinkList[MaxSize];



