#include "stdafx.h"

/********************����2019��chapter-2.3 ��Ӧ�����9�⣨P37��********************************
1����Ŀ��
	����һ������ͷ���ĵ���������headΪͷָ�룬���ĽṹΪ��data��next����dataΪ����Ԫ�أ�nextΪָ�룬
	��д���㷨����������������������и���������Ԫ�أ����ͷŽ����ռ�Ĵ洢�ռ䣨Ҫ�󣺲�����ʹ��������Ϊ�����ռ䣩��
2���㷨˼�룺
	����(һ)��
		������������������ͷ��ʼ���������αȽϣ������С�ڣ�������ƶ�����ָ�룬һ��һ����ȥ������ҵ���С�ڵ㣬����ɾ�����ɣ�
	����(��)��
		�ؽ�����������Ȼ��˳�������ͬʱ������ɾ��

**********************************************************************************************/

void IncrementPrintLink_1(LinkList& L) {
	LNode *pre, *p, *u; 
	while (L->next) {
		pre = L;
		p = pre->next;
		while (p->next) {
			if (p->next->data < pre->next->data) {
				pre = p;
			}
			p = p->next;
		}
		if (L->next->next) {
			printf_s("%d-->", pre->next->data);
			u = pre->next;
			pre->next = u->next;
			free(u);
		}else {
			printf_s("%d\n", pre->next->data);
			u = pre->next;
			pre->next = u->next;
			free(u);
		}
		
	}
	L->next = NULL;
}



/*  �Ƚ�������������ݵ��������ź��������������ɾ���������*/
void IncrementPrintLink_2(LinkList& L) {
	LNode* p = L->next;
	LNode* pre;
	LNode* r = p->next;
	p->next = NULL;
	p = r;
	while (p) {
		r = p->next;
		pre = L;
		while (pre->next != NULL && pre->next->data < p->data) {
			pre = pre->next;
		}
		p->next = pre->next;
		pre->next = p;
		p = r;
	}
	LNode* qre = L;
	LNode* q = qre->next;
	LNode* u;
	while (q->next) {
		printf_s("%d-->", q->data);
		u = qre->next;
		qre->next = u->next;
		q = q->next;
		free(u);
	}
	printf_s("%d\n", q->data);
	L->next = NULL;
	//free(L);
}