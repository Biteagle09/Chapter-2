#include "stdafx.h"

/********************����2019��chapter-2.3 ��Ӧ�����11�⣨P37��********************************
1����Ŀ��
	��C={al��b1��a2��b2��...��an��bn}Ϊ���Ա������ô�ͷ����hc��������ţ����һ���͵��㷨��������Ϊ�������Ա���ʹ��
	A={al��a2��...��an}��B={bn��...��b2��bl}��
2���㷨˼�룺
	1�㣺

**********************************************************************************************/

LinkList splitIntoAB(LinkList &A) {
	LinkList B = (LinkList)malloc(sizeof(LNode));
	if (B) B->next = NULL;
	LNode *p = A->next, *q;
	LNode *ra = A;
	while (p != NULL) {
		ra->next = p;
		ra = p;
		p = p->next;
		q = p->next;
		p->next = B->next;
		B->next = p;
		p = q;
	}
	ra->next = NULL;
	return B;
}