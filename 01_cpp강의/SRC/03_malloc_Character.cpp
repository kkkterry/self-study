#include <iostream>

int main() {

	float* pF = (float*)malloc(4);
	int* pI = (int*)pF;					//같은 공간을 하나는 float으로 다른하나는 int

	*pF = 2.4f;
	int i = *pI;						//2.4를 정수로 보려고 하니 엄청 큰수 처럼 보인다.

	// 동적할당
	// 1. 런타임 중에 대응 가능
	// 2. 사용자가 직접 관리해야함(해제)
	//


	int iInput = 0;

	scanf_s("%d", &iInput);
	int* pInt = nullptr;

	if (100 == iInput) {
		pInt = (int*)malloc(100);
	}

	if (nullptr != pInt) {
		free(pInt);					// 반드시 힙메모리 주소가 들어가야한다.
									// free 함수의 변수로 주소가 들어가서 거기에 있는 힙메모리를 해제
	}

	return 0;
}