#include <iostream>

// 변수
// 지역(스텍)
// 전역, 정적, 외부(데이터)


// 메모리 영역
// 스텍
// 데이터
// ROM
// 힙영역(동적할동)

int main(){

	int* pInt = (int*)malloc(100);		//메모리 동적 할당, 100byte, 주소를 받는 포인터 변수
										//malloc :void포인터 반환

	float* pf = (float*)malloc(4);
	*pf = 1.23f;



	return 0;
}