#pragma once

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





//线性表顺序表示结构体的定义
typedef struct sqList {
	int data[INT16_MAX];
	int length;
}sqList;




