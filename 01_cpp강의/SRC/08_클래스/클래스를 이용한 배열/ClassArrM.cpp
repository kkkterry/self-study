#include <iostream>
#include "Arr.h"
#include "CArr.h"

class CTest
{
private:
	int a;

public:
	CTest()
		: a(10)
	{

	}
};

int main() {

	// ����ü ---> Ŭ����

	// ��ü���� ��� Ư¡
	// 1. ĸ��ȭ
	// ����� �����ϱ� ���� �ʿ��� �ɺ� ����, ����, ���м�
	// �ɹ� �Լ���
	//

	// 2. ���
	//

	// 3. ������
	//

	// 4. �߻�ȭ
	//

	// ����ü ���� �����迭 --> Ŭ���� ����

	// c++ �����Ҵ� new, delete

	CTest* pTest = new CTest;		// new : �����Ҵ�Ǿ� �ִ� ���� � Ÿ���� ��ü�� ����Ǿ����� ����Ͽ� �����Ϸ��� �Ǻ��� ������ ȣ��
									// (CTest*)malloc(sizeof(CTest))�� ���� �����Ҵ� �ϰ�
									// �ʱ�ȭ ���� �ּҸ� ��ȯ�Ѵ�.

	delete  pTest;					// delete : �����Ҵ�Ǿ� �ִ� ���� � Ÿ���� ��ü�� ����Ǿ����� ����Ͽ� �����Ϸ��� �Ǻ��� ������ ȣ��
									// 

	//CArr ����
	tArr arr = {};
	InitArr(&arr);		//CArr carr;

	PushBack(&arr, 10);
	PushBack(&arr, 20);
	PushBack(&arr, 30);

	ReleaseArr(&arr);


	CArr carr;
	carr.push_back(10);
	carr.push_back(20);
	carr.push_back(30);

	// ��ȯŸ���� ���۷������ �ǹ�
	int iData = carr[1];
	carr[1] = 100;



	return 0;
}