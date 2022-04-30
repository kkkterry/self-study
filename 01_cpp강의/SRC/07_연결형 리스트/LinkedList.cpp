#include "LinkedList.h"
#include <iostream>

void InitList(tLinkedList* _pList)
{
	_pList->pHeadNode = nullptr;
	_pList->iCount = 0;

}

void PushBack(tLinkedList* _pList, int iData)
{
	//데이터 저장 노드 생성
	tNode* pNode = (tNode*)malloc(sizeof(tNode));
	pNode->iData = iData;
	pNode->pNextNode = nullptr;

	//추가한 데이터가 처음인지 아닌지
	if (0 == _pList->iCount)
	{
		_pList->pHeadNode = pNode;
	}
	else {
		// 현재 가장 마지막 노드를 찾아서
		// 해당 노드의 pNext를 생성시킨 노드의 주소로 채움

		tNode* pCurFinalNode = _pList->pHeadNode;
		while (pCurFinalNode->pNextNode) {
			pCurFinalNode = pCurFinalNode->pNextNode;
		}

		pCurFinalNode->pNextNode = pNode;


	}
	++_pList->iCount;
}

void PushFront(tLinkedList* _pList, int iData){
	//데이터 저장 노드 생성
	tNode* pNewNode = (tNode*)malloc(sizeof(tNode));
	pNewNode->iData = iData;
	pNewNode->pNextNode = _pList->pHeadNode;

	// 리스트의 헤드노드 포인터를 갱신한다.
	_pList->pHeadNode = pNewNode;

	//데이터
	++_pList->iCount;
}

// 제귀함수 사용시 사용
void Release(tNode* _pNode) {
	if (nullptr == _pNode)
		return;

	Release(_pNode->pNextNode);
	free(_pNode);
}


// 
void ReleaseList(tLinkedList* _pList)
{
	//Release(_pList->pHeadNode);

	tNode* pDeletNode = _pList->pHeadNode;

	while (pDeletNode) {
		tNode* pNext = pDeletNode->pNextNode;
		free(pDeletNode);
		pDeletNode = pNext;

	}

}
