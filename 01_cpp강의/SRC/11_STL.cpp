#include <iostream>
#include "ClassTemplate_JaggedArrcpp.h"

#include <vector>		// ǥ������ �������ִ� �����迭
#include <list>			// ǥ������ �������ִ� ����������Ʈ

using std::cout;
using std::wcout;
using std::cin;
using std::endl;

using std::vector;
using std::list;


int main() {

	vector<int> vecInt;
	vecInt.push_back(10);
	vecInt.push_back(20);// push_front�������� ���� -> ���� : �������� �����͸� ���� �����̾��ٸ�
						 // �����͸� list�� �޾ƾ� ��.

	vecInt[0] = 100;
	vecInt.at(1);		// vecInt[1]
	vecInt.data();		// ������ ���� �ּҸ� ��Ÿ����
	vecInt.size();		// ���� �����Ͱ� ��ΰ�
	vecInt.capacity();	// ��뵥���� ����

	for (size_t i = 0; i<vecInt.size(); ++i) {

		cout << vecInt[i] << endl;

	}
	
	list<int> listInt;
	listInt.push_back(10);
	listInt.push_front(100);
	listInt.size();

	//iterlator(�ݺ���)
	list<int>::iterator iter = listInt.begin(); // innerclass : class�� class
	int iData = *iter; // *������ �����ε� : iter�� ����Ű�� �ִ� ���� ������ ��Ʈ�� ������ ��
	//listInt[1] = 100; �ȵ� -> ����: ������ ����Ʈ�� ������ ������ �迭�� �޶� �����ִ°��� �������ؼ�




	return 0;
}


