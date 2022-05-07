#pragma once

template<typename T>
struct tListNode {// �⺻�� public
	//�ܼ��� �����͸� ���� ���� �����͸� �����Ҷ� -> ����ü

	T				data;
	tListNode<T>*	pPrev;
	tListNode<T>*	pNext;		// ���� ���� ������ ��� <T> ��������
	

	tListNode()
		: data()
		, pNext(nullptr)
		, pPrev(nullptr)	// ����ü ������
	{

	}

	tListNode(const T& _data, tListNode<T>* _pPrev, tListNode<T>* _pNext )
		: data(_data)
		, pPrev(_pPrev)
		, pNext(_pNext)
	{

	}

	~tListNode() {

	}


};



template<typename T>
class CList {
	// �⺻�� private
	// ����ü�� ���� ���� ������ ����� ������ -> class
private:
	tListNode<T>*	m_pHead;
	tListNode<T>*	m_pTail;
	int				m_iCount;

public:
	void push_back(const T& _data);
	void push_front(const T& _data);


public:
	CList();
	~CList();

};

template<typename T>
inline void CList<T>::push_back(const T& _data)
{
	// �Էµ� �����͸� ������ ��带 �����Ҵ� ��
	tListNode<T>* pNewNode = new tListNode<T>(_data, nullptr, m_pHead);

	// ó�� �Էµ� �����Ͷ��
	if (nullptr == m_pHead) {
		m_pHead = pNewNode;
		m_pTail = pNewNode;

	}else {
	// �����Ͱ� 1�� �̻�
	// ���� ���� ������ ������(tail)�� �����ϰ� �ִ� ��尡
	// ���� ������ ��尡 ���� ����Ű�� �Ѵ�.
		
		m_pTail->pNext = pNewNode;
		pNewNode->pPrev = m_pTail;

		//����Ʈ ���ϱ���ü �ּ� ����
		m_pTail = pNewNode;
	}
	//����Ʈ Ŭ���� �ȿ� ������ �� ����
	++m_iCount;
}

template<typename T>
inline void CList<T>::push_front(const T& _data)
{
	// �Էµ� �����͸� ������ ��带 �����Ҵ� ��
	tListNode<T>* pNewNode = new tListNode<T>(_data, nullptr, nullptr);

	//�����Ͱ� �ϳ��� ���� ���
	if (nullptr == m_pHead) {
		m_pHead = pNewNode;
		m_pTail = pNewNode;

	}
	else {
		// �����Ͱ� 1�� �̻�
		// ���� ���� ������ ������(tail)�� �����ϰ� �ִ� ��尡
		// ���� ������ ��尡 ���� ����Ű�� �Ѵ�.

		m_pHead->pPrev = pNewNode;
		pNewNode->pNext = m_pHead;

		//����Ʈ ���ϱ���ü �ּ� ����
		m_pHead = pNewNode;
	}
	//����Ʈ Ŭ���� �ȿ� ������ �� ����
	++m_iCount;
}


template<typename T>
CList<T>::CList() 
	: m_pHead(nullptr)
	, m_pTail(nullptr)
	, m_iCount(0)
{
	
}

template<typename T>
inline CList<T>::~CList()
{
	tListNode<T>* pDeletNode = m_pHead;

	while (pDeletNode) {

		tListNode<T>* pNext = pDeletNode->pNext;
		delete(pDeletNode);
		pDeletNode = pNext;

	}
}