#include <iostream>
#include "ClassTemplate_JaggedArrcpp.h"

#include <vector>		// 표준으로 제공해주는 가변배열
#include <list>			// 표준으로 제공해주는 연결형리스트

using std::cout;
using std::wcout;
using std::cin;
using std::endl;

using std::vector;
using std::list;


int main() {

	vector<int> vecInt;
	vecInt.push_back(10);
	vecInt.push_back(20);// push_front존재하지 않음 -> 이유 : 앞쪽으로 데이터를 넣을 예정이었다면
						 // 데이터를 list로 받아야 함.

	vecInt[0] = 100;
	vecInt.at(1);		// vecInt[1]
	vecInt.data();		// 벡터의 시작 주소를 나타내줌
	vecInt.size();		// 현제 데이터가 몇개인가
	vecInt.capacity();	// 허용데이터 갯수

	for (size_t i = 0; i<vecInt.size(); ++i) {

		cout << vecInt[i] << endl;

	}
	
	list<int> listInt;
	listInt.push_back(10);
	listInt.push_front(100);
	listInt.size();

	//iterlator(반복자)
	list<int>::iterator iter = listInt.begin(); // innerclass : class안 class
	int iData = *iter; // *연산자 오버로딩 : iter가 가리키고 있는 곳에 데이터 파트만 가지고 옴
	//listInt[1] = 100; 안됨 -> 이유: 연결형 리스트의 데이터 구조가 배열과 달라서 착각주는것을 막기위해서




	return 0;
}


