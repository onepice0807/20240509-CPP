#include <iostream>

using namespace std;
// ���������
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
		cout << "a������ ����� ���� ¦���Դϴ�." << endl;
	}
	else{
		cout << "a������ ����� ���� Ȧ���Դϴ�." << endl;
	}

	return 0;
}