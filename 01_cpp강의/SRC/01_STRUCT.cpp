// ����ü
#include <stdio.h>

typedef struct _tagMyST {
	int   a;
	float f;
}MYST;


int main() {
	
	MYST s = {};
	MYST* pST = &s;	// ����ü ������
	
	(*pST).a = 100;		//pST->a = 100;
	(*pST).f = 3.14f;	//pST->f = 3.14f;

	return 0;

}