#include <iostream>

// ����
// ����(����)
// ����, ����, �ܺ�(������)


// �޸� ����
// ����
// ������
// ROM
// ������(�����ҵ�)

int main(){

	int* pInt = (int*)malloc(100);		//�޸� ���� �Ҵ�, 100byte, �ּҸ� �޴� ������ ����
										//malloc :void������ ��ȯ

	float* pf = (float*)malloc(4);
	*pf = 1.23f;



	return 0;
}