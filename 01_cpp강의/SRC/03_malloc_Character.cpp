#include <iostream>

int main() {

	float* pF = (float*)malloc(4);
	int* pI = (int*)pF;					//���� ������ �ϳ��� float���� �ٸ��ϳ��� int

	*pF = 2.4f;
	int i = *pI;						//2.4�� ������ ������ �ϴ� ��û ū�� ó�� ���δ�.

	// �����Ҵ�
	// 1. ��Ÿ�� �߿� ���� ����
	// 2. ����ڰ� ���� �����ؾ���(����)
	//


	int iInput = 0;

	scanf_s("%d", &iInput);
	int* pInt = nullptr;

	if (100 == iInput) {
		pInt = (int*)malloc(100);
	}

	if (nullptr != pInt) {
		free(pInt);					// �ݵ�� ���޸� �ּҰ� �����Ѵ�.
									// free �Լ��� ������ �ּҰ� ���� �ű⿡ �ִ� ���޸𸮸� ����
	}

	return 0;
}