#include <iostream>
#include<time.h>
#include "Arr.h"
//�����迭
//int g_i = 100;

//typedef struct _tagST {
//	int iArr[g_i]; 
//}ST;
// �ȵȴ�.

int main() {

	//int arr[10] = {}; �Ϲݹ迭
	// �����迭: ���α׷� ���൵�� ���α׷��� �ʿ信 ���� �����ϴ� �迭
	// int a = 100;
	// scanf_s("%d", &a);
	// int arr[a] = {};
	// �ȵȴ� -> ���������δ� �ȵ�
	// �ȵȴ� -> 
	// �ȵȴ� -> ������ �������� ���� �迭�� �������� �Ҵ� �� �� ����.

	//��ü
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

