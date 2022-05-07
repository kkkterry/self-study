#pragma once

template<typename T>
struct tListNode {// 기본이 public
	//단순히 데이터를 묶어 놓고 데이터를 저장할때 -> 구조체

	T				data;
	tListNode<T>*	pPrev;
	tListNode<T>*	pNext;		// 본인 선언 내부일 경우 <T> 생략가능
	

	tListNode()
		: data()
		, pNext(nullptr)
		, pPrev(nullptr)	// 구조체 생성자
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
	// 기본이 private
	// 구조체에 비해 좀더 복잡한 기능을 넣을때 -> class
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
	// 입력된 데이터를 저장할 노드를 동적할당 함
	tListNode<T>* pNewNode = new tListNode<T>(_data, nullptr, m_pHead);

	// 처음 입력된 데이터라면
	if (nullptr == m_pHead) {
		m_pHead = pNewNode;
		m_pTail = pNewNode;

	}else {
	// 데이터가 1개 이상
	// 현재 가장 마지막 데이터(tail)을 저장하고 있는 노드가
	// 새로 생성된 노드가 서로 가리키게 한다.
		
		m_pTail->pNext = pNewNode;
		pNewNode->pPrev = m_pTail;

		//리스트 테일구조체 주소 변경
		m_pTail = pNewNode;
	}
	//리스트 클래스 안에 데이터 수 증가
	++m_iCount;
}

template<typename T>
inline void CList<T>::push_front(const T& _data)
{
	// 입력된 데이터를 저장할 노드를 동적할당 함
	tListNode<T>* pNewNode = new tListNode<T>(_data, nullptr, nullptr);

	//데이터가 하나도 없는 경우
	if (nullptr == m_pHead) {
		m_pHead = pNewNode;
		m_pTail = pNewNode;

	}
	else {
		// 데이터가 1개 이상
		// 현재 가장 마지막 데이터(tail)을 저장하고 있는 노드가
		// 새로 생성된 노드가 서로 가리키게 한다.

		m_pHead->pPrev = pNewNode;
		pNewNode->pNext = m_pHead;

		//리스트 테일구조체 주소 변경
		m_pHead = pNewNode;
	}
	//리스트 클래스 안에 데이터 수 증가
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