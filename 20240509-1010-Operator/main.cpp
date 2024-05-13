#include <iostream>

using namespace std;
// 산술연산자
// +, -. *, /, %

int main() {
	int a = 20;
	int b = 30;
	int ret = 0;

	ret = a + b;
	cout << a << " + " << b << " = " << ret << endl;

	ret = a - b;
	cout << a << " - " << b << " = " << ret << endl;

	ret = a * b;
	cout << a << " X " << b << " = " << ret << endl;

	ret = a / b;
	cout << a << " / " << b << " = " << ret << endl;

	if (a % 2 == 0) {
		cout << "a변수에 저장된 값이 짝수입니다." << endl;
	}
	else{
		cout << "a변수에 저장된 값이 홀수입니다." << endl;
	}

	return 0;
}