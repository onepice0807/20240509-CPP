#include <iostream>

using namespace std;
// ����������
// ++, -- ������
// ������ ������ ����ϸ�
// ++ ������ ���� 1����
// -- ������ ���� 1����

int main() {
	int a = 20;
	int c = 0;

	cout << "a =" << a << endl;

	a++; // ������
	//a = a + 1;
	cout << "a++ =" << a << endl;

	++a; // ������
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