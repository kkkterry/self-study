#include <iostream>
#include "ClassTemplate_JaggedArrcpp.h"

namespace MYSPACE {
	int g_int;
}

namespace OHSPACE {
	int g_int;		// 변수명 같이도 가능
}

//using namespace std
//using namespace std; // std라는 namespace를 사용하겠다 -> namespace 없는 취급
using std::cout;
using std::wcout;
using std::cin;
using std::endl;

void MyEndL() {
	wprintf(L"\n");
}



class CMyOStream {

public:
	CMyOStream operator << (int _idata) {

		printf("%d", _idata);
		return *this;

	}

	CMyOStream operator << (const wchar_t* _pString) {

		printf("%s", _pString);
		return *this;

	}

	CMyOStream operator << (void(*_pFunc)(void)) {

		_pFunc();
		return *this;

	}

	CMyOStream operator >> (int& _idata) {

		scanf_s("%d", &_idata);
		return *this;

	}


};

CMyOStream mycout;	// 크기 : 1byte



int main() {

	MYSPACE::g_int = 0;
	OHSPACE::g_int = 0;

	mycout << 10 << 20 << 30 << MyEndL;

	//언어설정
	setlocale(LC_ALL, "korean");
	_wsetlocale(LC_ALL, L"korean");

	mycout << L"한글";
	
//	int a = 0;
//	mycount >> a;

	mycout << 10 << L" "<< 20 << MyEndL;

	return 0;

}