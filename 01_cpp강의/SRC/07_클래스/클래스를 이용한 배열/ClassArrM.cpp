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

	// 구조체 ---> 클래스

	// 객체지향 언어 특징
	// 1. 캡슐화
	// 기능을 수행하기 위해 필요한 맴베 선언, 묶음, 은닉성
	// 맴버 함수들
	//

	// 2. 상속
	//

	// 3. 다형성
	//

	// 4. 추상화
	//

	// 구조체 버전 가변배열 --> 클래스 버전

	// c++ 동적할당 new, delete

	CTest* pTest = new CTest;		// new : 동적할당되어 있는 곳이 어떤 타입의 객체가 선언되었는지 명시하여 컴파일러가 판별해 생성자 호출
									// (CTest*)malloc(sizeof(CTest))를 통해 동적할당 하고
									// 초기화 한후 주소를 반환한다.

	delete  pTest;					// delete : 동적할당되어 있는 곳이 어떤 타입의 객체가 선언되었는지 명시하여 컴파일러가 판별해 생성자 호출
									// 

	//CArr 예시
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

	// 반환타입이 래퍼런스라는 의미
	int iData = carr[1];
	carr[1] = 100;



	return 0;
}