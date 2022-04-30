#pragma once

typedef struct _tagNode {

	int iData;
	struct _tagNode* pNextNode;

}tNode;

typedef struct _taglist {

	tNode* pHeadNode;			// 리스트가 가진 노드중 첫번째 노드 주소
	int iCount;					// 리스트 안의 총 노드 수

}tLinkedList;

//연결형 리스트 초기화
void InitList(tLinkedList* _pList);

//데이터 입력
void PushBack(tLinkedList* _pList, int iData);

//데이터 앞부분에 추가
void PushFront(tLinkedList* _pList, int iData);

//리스트 메모리 해제
void ReleaseList(tLinkedList* _pList);
