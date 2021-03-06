#pragma once
typedef struct _tagArr {

	int* pInt;
	int iCount;
	int iMaxCount;

}tArr;

// 배열 초기화 함수
void InitArr(tArr* _pArr);

// 데이터 추가 함수
void PushBack(tArr* _pArr, int _iData);

// 배열 메모리 해제 함수
void ReleaseArr(tArr* _pArr);

// 꽉찬경우 추가 함수
void Reallocate(tArr* _pArr);

// 데이터 버블정렬 함수
void Sort(tArr* _pArr, void(*SortFunc)(int*, int));