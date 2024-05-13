#include <iostream>

using namespace std;
// 증강연산자
// ++, -- 연산자
// 정수형 변수에 사용하며
// ++ 변수의 값을 1증가
// -- 변수의 값을 1감소

int main() {
	int a = 20;
	int c = 0;

	cout << "a =" << a << endl;

	a++; // 후위식
	//a = a + 1;
	cout << "a++ =" << a << endl;

	++a; // 전위식
	// a = a + 1;
	cout << " ++a = " << a << endl;

	c = a++;
	// c = a;
	// a = a + 1;
	cout << " c = " << ", a" << endl;

	c = ++a;
	// a = a + 1;
	// c = a;
	cout << "c = " << c << ", a = " << a << endl;

	return 0;
}