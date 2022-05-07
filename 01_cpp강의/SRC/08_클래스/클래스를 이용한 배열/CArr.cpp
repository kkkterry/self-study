#include <cassert>
#include "CArr.h"


void CArr::resize(int _iResizeCount)
{
	// 현제 최대 수용량 보다 더 작은 수치로 화장하려는 경우
	if (m_iMaxCount >= _iResizeCount)
	{
		assert(nullptr);
	}

	//1. 리사이즈 시킬 개수만큼 동적할당 한다.
	int* pNew = new int[_iResizeCount];

	//2. 기존 공간에 있던 데이터들을 새로 할당된 공간으로 복사시킨다.
	for (int i = 0; i < m_iCount; ++i) {
		pNew[i] = m_pInt[i];
	}

	//3. 기존 공간은 메모리 해제
	delete[] m_pInt;

	//4. 배열이 새로 할당된 공간을 가리키게 한다.
	m_pInt = pNew;

	//5. MaxCount 변경점 적용
	m_iMaxCount *= 2;

}

int* CArr::operator[](int idx)
{
	return (m_pInt + idx);		//&m_pInt[idx];
}


void CArr::push_back(int _Data)// this 생략 가능
{
	// 힙 영역에 할당한 공간이 다 참
	if (this->m_iMaxCount <= this->m_iCount) {
		resize(m_iMaxCount*2);
	}

	//데이터 추가
	this->m_pInt[this->m_iCount++] = _Data;
}


CArr::CArr()
	: m_pInt(nullptr)
	, m_iCount(0)
	, m_iMaxCount(2)
{
	m_pInt = new int[2];	// 동적할당 할때 선언(new)

}

CArr::~CArr()
{
	delete[] m_pInt;	// 배열형태를 메모리를 지울 경우
	//delete m_pInt 메모리 1개 일경우



}
