#pragma once


// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "stdio.h"
#include "tchar.h"
#include "Windows.h"
#include <cstdio>
#include <ctime>
#include <cmath>


/*
ע�������string��cstring�е�ʹ�ò��
�ڶ�����ʹ��cout���string�����ַ�����ʱ�����ʹ��string�⣬
������ܻ���������Լ������һϵ�д���
*/
#include <string>    



// TODO:  �ڴ˴����ó�����Ҫ������ͷ�ļ�





//���Ա���ʽ�ṹ��Ķ���
//������
typedef struct LNode {
	int data;
	struct LNode *next;;
}*LinkList,LNode;


//����ѭ������
typedef struct LCirNode {
	int data;
	struct LCirNode*next;
};



//˫����
typedef struct DNode {
	int data;
	struct DNode* prior; //ǰ��ָ��
	struct DNode* next;  //���ָ��
};



//˫��ѭ������
typedef struct DCirNode {
	int data;
	struct DCirNode* prior; //ǰ��ָ��
	struct DCirNode* next;  //���ָ��
};



//��̬����
typedef struct StNode {
	int data;
	int next;
};


