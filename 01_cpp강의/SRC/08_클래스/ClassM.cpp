#include<iostream>
#include"Arr.h"

struct tMy {

};

class cMy {
	// 접근 제한 지정자
	// private, protected(상속), public

private:	// 비공계
	int m_i;
	float m_f;

public:
	void SetInt(int i) {// this 키워드 생략
		this->m_i = i;// this 키워드 생략가능 , this는 이 객체의 주소
	}

	// 대입연산자
	cMy& operator = (const cMy& _Other)
	{
		m_i = _Other.m_i;
		m_f = _Other.m_f;

		return *this;
	}

public:
	//생성자 : 객체가 만들어질때 호출됨(컴파일러가 없어도 자동으로 호출해줌, 내용이 없으면 그냥 넘어감)
	cMy()
		: m_i(100), m_f(0.f)	//이니셜라이져 : 생성자 특수 문법
	{
	}

	//소멸자 : 객체가 소멸될때 자동으로 호줄됨(컴파일러가 없어도 자동으로 호출해줌, 내용이 없으면 그냥 넘어감)
	~cMy()
	{
	}

};



int main() {

	// c++ class의 특징
	// 접근제한 지정자
	// 클래스 내의 맴버변수 or 맴버변수의 접근 레벨
	// 
	// 1. 생성자, 소멸자
	// 2. 객체 생성, 소멸시 자동으로 호출
	// 3. 직접 만들지 않으면 기본 생성자, 기본 소멸자가 만들어짐
	// 
	// 맴버함수
	// 해당 클래스가 사용하는 전용함수
	// 해당 클래스의 객체가 필요함
	// 맴버함수를 객체를 통해서만 호출하면, 해당 객체의 주소가 this 포인터로 전달된다.
	// 
	{
		// 래퍼런스
		// 자료형* 변수명;	: 포인터 변수 선언
		// *포인터변수;		: 포인터로 주소 역참조
		// &변수;			: 변수의 주소값
		// 자료형& 변수명;	: 래퍼런스 변수 선언
		// * 래퍼런스 변수 -> 변수에게 별명을 붙여준다고 생각하면됨
		//                 -> 대입된 변수의 값과 주소를 모두 그대로 가짐
		// 
		// C++에 추가된 기능
		// 포인터와 유사
		// 원본을 참조한다
		// 참조변수를 통해서 직접적으로 원본을 수정할 수 있다.
		//

		int a = 10;

		int* const p = &a;
		*p = 100;

		const int* p2 = &a;
		//*p2 = 10;

		int& iRef = a;				// 래퍼런스: 역참조 연산없이 원본 변경이 가능하다.
		iRef = 100;

		const int& iRefConst = a;	// const int* const p(콘스트 인트포인터 콘스트)
		//iRefConst = 10;			

	}

	cMy c;
	//c.n_i = 10 불가능(private)
	c.SetInt(10); // 가능
	
	
	
	return 0;
}