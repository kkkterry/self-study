#pragma once

typedef struct _tagNode {

	int iData;
	struct _tagNode* pNextNode;

}tNode;

typedef struct _taglist {

	tNode* pHeadNode;			// ����Ʈ�� ���� ����� ù��° ��� �ּ�
	int iCount;					// ����Ʈ ���� �� ��� ��

}tLinkedList;

//������ ����Ʈ �ʱ�ȭ
void InitList(tLinkedList* _pList);

//������ �Է�
void PushBack(tLinkedList* _pList, int iData);

//������ �պκп� �߰�
void PushFront(tLinkedList* _pList, int iData);

//����Ʈ �޸� ����
void ReleaseList(tLinkedList* _pList);
