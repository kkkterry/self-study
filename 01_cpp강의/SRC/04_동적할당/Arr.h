#pragma once

//int
typedef struct _tabArr {

	int*	pInt;		//������ �ּ�
	int		iCount;		//������ ��
	int		iMaxCount;	//������ ���� �ִ밹�� iCount�� �ִ�ġ�� �Ǿ����� iMaxCount �÷��ش�.

}tArr;

// ������ �ʱ�ȭ �Լ�
void InitArr(tArr* _pArr);


// ������ �߰� �Լ�
void PushBack(tArr* _pArr, int _iData);

// ���� �߰� �Լ�
void Reallocate(tArr* _pArr);


// ������ �޸� ���� �Լ�
void ReleaseArr(tArr* _pArr);



