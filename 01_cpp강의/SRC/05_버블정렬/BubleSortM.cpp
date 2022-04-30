// 삽입정렬, 선택정렬, 합병정렬, 쾌속정렬, 힙정렬
#include <iostream>
#include "BubleSort.h"

int main() {

	tArr s1 = {};
	InitArr(&s1);

	// 함수(랜덤)
	srand(time(nullptr));

	for (int i = 0; i < 10; ++i) {
		int iRand = rand() % 100 + 1;
		PushBack(&s1, iRand);
	}

	for (int i = 0; i < s1.iCount; i++) {
		printf("%d\n", s1.pInt[i]);
	}

	Sort(&s1);

	for (int i = 0; i < s1.iCount; i++) {
		printf("%d\n", s1.pInt[i]);
	}

	ReleaseArr(&s1);

	return 0;

}