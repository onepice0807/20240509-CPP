#include <iostream>

using namespace std;


int main() {
	// 관계 연산자
	// <, >, <=, >=, ==, !=
	int a = 1;
	int b = 2;
	bool ret = false;

	ret = a < b;
	cout << boolalpha;
	cout << " a < b " << ret << endl;

	ret = a <= b;
	cout << " a <= b " << ret << endl;

	ret = a != b;
	cout << " a != b " << ret << endl;

	// 논리 연산자
	// &&(논리 and), ||(논리 or), !(논리 not)
	bool ret2 = true && true;
	cout << " true && true = " << ret2 << endl;

	ret2 = false && false;
	cout << " false && false = " << ret2 << endl;

	ret2 = !false;
	cout << " !false =  " << ret2 << endl;

	return 0;
}