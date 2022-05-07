#include <iostream>

int add(int a, int b) {
	return a + b;
}

float Add(float a, float b) {
	return a + b;
}
// 비슷한 형태인데 인자차이로 다시만드네.. -> 템플릿;

template<typename T>
T Add(T a, T b) {
	return a + b;
}


int main() {

	//함수 템플릿
	int i = Add<int>(10, 20);
	float f = Add<float>(100, 200);


	return 0;
}