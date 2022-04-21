#pragma once

//int
typedef struct _tabArr {

	int*	pInt;		//데이터 주소
	int		iCount;		//데이터 수
	int		iMaxCount;	//데이터 저장 최대갯수 iCount가 최대치가 되었을때 iMaxCount 늘려준다.

}tArr;

// 데이터 초기화 함수
void InitArr(tArr* _pArr);


// 데이터 추가 함수
void PushBack(tArr* _pArr, int _iData);

// 공간 추가 함수
void Reallocate(tArr* _pArr);


// 데이터 메모리 해제 함수
void ReleaseArr(tArr* _pArr);



