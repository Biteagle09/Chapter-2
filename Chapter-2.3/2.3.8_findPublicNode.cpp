#include "stdafx.h"
int getLinkLen(LinkList L);
/********************����2019��chapter-2.3 ��Ӧ�����8�⣨P37��********************************
1����Ŀ��
	������������������д�㷨�ҳ����������Ĺ�����㡣
2���㷨˼�룺
	0�㣺����˼�룺�����������й�����㣬Ҳ����˵����������ĳһ��㿪ʼ�����ǵ�next��ָ��ͬһ����㡣����ÿ�����������ֻ��һ��next��
				��˴ӵ�һ��������㿪ʼ��֮���������еĽ�㶼���غϵģ��������ٳ��ֲַ档���ԣ������й������������غϵĵ�������
				������״��������Y������������X��
	1�㣺����������������ĳ��ȣ��������ǳ��Ȳ�ֵΪk,Ȼ������������ָ��P1��P2,�ҳ����ǳ��Ƚϴ���Ǹ�����������������ƶ�k��λ�ã��Դﵽβ�����룻
	2�㣺Ȼ���ж���������ָ���next�Ƿ���ȣ�����ȣ��򷵻�����ڵ㼰��֮������нڵ�Ϊ�����ǵĹ����ڵ�

**********************************************************************************************/

//������һ��
LinkList FindPublicNode_1(LinkList L1, LinkList L2) {
	if (!(L1->next && L2->next)) {
		return NULL;            //�п�
	}
	int lenL1 = getLinkLen(L1);  //�����L1��L2�ĳ���
	int lenL2 = getLinkLen(L2);
	LNode* p1 = L1->next;        //��ʼ������ָ��P1��P2
	LNode* p2 = L2->next;
	LinkList L;                  //�����������յĹ�������

	int k, j = 0;               //k������¼L1��L2�ĳ��ȵĲ�ֵ��j������¼���Ƚϳ���ָ������ƶ��ĸ���
	if (lenL1 >= lenL2) {         
		k = lenL1 - lenL2;
		while (j++ != k) {
			p1 = p1->next;
		}
		while (p2->next != p1->next) {
			p1 = p1->next;
			p2 = p2->next;
		}
		L =  (LinkList)p2;
	}else {
		k = lenL2 - lenL1;
		while (j++ != k) {
			p2 = p2->next;
		}
		while (p2->next != p1->next) {
			p1 = p1->next;
			p2 = p2->next;
		}
		L = (LinkList)p1;
	}
	printf_s("k==%d", k);
	return L;
}




//����������
LinkList FindPublicNode_2(LinkList L1, LinkList L2) {
	int len1 = getLinkLen(L1);
	int len2 = getLinkLen(L2);
	int dist;
	LinkList shortList, longList;
	if (len1 > len2) {
		longList = L1->next;
		shortList = L2->next;
		dist = len1 - len2;
	}else {
		longList = L2->next;
		shortList = L1->next;
		dist = len2 - len1;
	}

	while (dist--){
		longList = longList->next;
	}

	while (longList != NULL){
		if (longList->next == shortList->next) {
			return longList;
		}else{
			longList = longList->next;
			shortList = shortList->next;
		}
	}
	return NULL;
}









//�������ĳ���
int getLinkLen(LinkList L) {
	LNode* p = L->next;
	int len = 0;
	while (p) {
		p = p->next;
		len++;
	}
	return len;
}