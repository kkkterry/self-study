#include<iostream>
#include "BubleSort.h"
// 단축키 ctrl + '+', '.'
void InitArr(tArr* _pArr){
	_pArr->pInt = (int*)malloc(sizeof(int)*2);		//8byte 할당
	_pArr->iCount = 0;
	_pArr->iMaxCount = 2;

}

void Sort(tArr* _pArr){
	
	// 데이터가 1개 이하면 정렬하지 않음
	if (_pArr->iCount <= 1)
		return;

	// 오름차순 정렬
	while (true) {

		bool bFinish = true;

		for (int i = 0; i < _pArr->iCount - 1; ++i) {
			if (_pArr->pInt[i] < _pArr->pInt[i + 1]) {
				int iTemp = _pArr->pInt[i];
				_pArr->pInt[i] = _pArr->pInt[i + 1];
				_pArr->pInt[i + 1] = iTemp;

				bFinish = false;

			}
		}

		if (bFinish)
			break;
	}
}


void Reallocate(tArr* _pArr){
	
	//1. 2배 더큰 공간을 동적할당 한다.
	int* pNew = (int*)malloc(_pArr->iMaxCount * 2 * sizeof(int));
	
	//2. 기존 공간에 있던 데이터를 새로 할당한 공간으로 복사시킨다.
	for (int i = 0; i < _pArr->iMaxCount; ++i) {
		pNew[i] = _pArr->pInt[i];
	}

	//3. 기존 공간은 메모리 해제
	free(_pArr->pInt);

	//4. 배열이 새로 할당된 공간을 가리키게 한다.
	_pArr->pInt = pNew;

	//5. MaxCount 변경점 적용
	_pArr->iMaxCount *= 2;

}


void PushBack(tArr* _pArr, int _iData){
	
	// 힙 영역에 할당한 공간이 다 참
	if (_pArr->iMaxCount <= _pArr->iCount) {
		// 재할당
		Reallocate(_pArr);
	}

	// 데이터 추가
	_pArr->pInt[_pArr->iCount++] =  _iData;
}



void ReleaseArr(tArr* _pArr){
	free(_pArr->pInt);
	_pArr->iCount = 0;
	_pArr->iMaxCount = 0;

}

