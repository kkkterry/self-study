#include <cassert>
#include "CArr.h"


void CArr::resize(int _iResizeCount)
{
	// ���� �ִ� ���뷮 ���� �� ���� ��ġ�� ȭ���Ϸ��� ���
	if (m_iMaxCount >= _iResizeCount)
	{
		assert(nullptr);
	}

	//1. �������� ��ų ������ŭ �����Ҵ� �Ѵ�.
	int* pNew = new int[_iResizeCount];

	//2. ���� ������ �ִ� �����͵��� ���� �Ҵ�� �������� �����Ų��.
	for (int i = 0; i < m_iCount; ++i) {
		pNew[i] = m_pInt[i];
	}

	//3. ���� ������ �޸� ����
	delete[] m_pInt;

	//4. �迭�� ���� �Ҵ�� ������ ����Ű�� �Ѵ�.
	m_pInt = pNew;

	//5. MaxCount ������ ����
	m_iMaxCount *= 2;

}

int* CArr::operator[](int idx)
{
	return (m_pInt + idx);		//&m_pInt[idx];
}


void CArr::push_back(int _Data)// this ���� ����
{
	// �� ������ �Ҵ��� ������ �� ��
	if (this->m_iMaxCount <= this->m_iCount) {
		resize(m_iMaxCount*2);
	}

	//������ �߰�
	this->m_pInt[this->m_iCount++] = _Data;
}


CArr::CArr()
	: m_pInt(nullptr)
	, m_iCount(0)
	, m_iMaxCount(2)
{
	m_pInt = new int[2];	// �����Ҵ� �Ҷ� ����(new)

}

CArr::~CArr()
{
	delete[] m_pInt;	// �迭���¸� �޸𸮸� ���� ���
	//delete m_pInt �޸� 1�� �ϰ��



}
