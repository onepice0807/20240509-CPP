#include <iostream>

using namespace std;


int main() {
	// ���� ������
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

	// �� ������
	// &&(�� and), ||(�� or), !(�� not)
	bool ret2 = true && true;
	cout << " true && true = " << ret2 << endl;

	ret2 = false && false;
	cout << " false && false = " << ret2 << endl;

	ret2 = !false;
	cout << " !false =  " << ret2 << endl;

	return 0;
}