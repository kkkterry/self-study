#include <iostream>

int add(int a, int b) {
	return a + b;
}

float Add(float a, float b) {
	return a + b;
}
// ����� �����ε� �������̷� �ٽø����.. -> ���ø�;

template<typename T>
T Add(T a, T b) {
	return a + b;
}


int main() {

	//�Լ� ���ø�
	int i = Add<int>(10, 20);
	float f = Add<float>(100, 200);


	return 0;
}