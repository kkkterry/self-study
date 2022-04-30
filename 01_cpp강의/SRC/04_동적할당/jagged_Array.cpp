#include <iostream>
#include<time.h>
#include "Arr.h"
//가변배열
//int g_i = 100;

//typedef struct _tagST {
//	int iArr[g_i]; 
//}ST;
// 안된다.

int main() {

	//int arr[10] = {}; 일반배열
	// 가변배열: 프로그램 실행도중 프로그램의 필요에 따라 증감하는 배열
	// int a = 100;
	// scanf_s("%d", &a);
	// int arr[a] = {};
	// 안된다 -> 지역변수로는 안됨
	// 안된다 -> 
	// 안된다 -> 개수가 정해지지 않은 배열을 지역에다 할당 할 수 없다.

	//객체
	//int
	//int a;
	
	tArr s1 = {};

	InitArr(&s1);

	for (int i = 0; i < 10; ++i) {
		PushBack(&s1, i);
	}

	for (int i = 0; i < s1.iCount; i++) {
		printf("%d\n", s1.pInt[i]);
	}
	
	ReleaseArr(&s1);



	return 0;
}

