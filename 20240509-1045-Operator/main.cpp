#include <iostream>

using namespace std;

int main() {
	int inputX = 0;

	cout << " ���� ���� �Է��ϼ��� ";
	cin >> inputX; // cin ���� Ű����� ���� �Է� ���� �� ���

	bool isinside = false;

	isinside = 0 < inputX && inputX < 10;

	if (isinside) {
		cout << inputX << " �� 0�� 10���̿� �ֽ��ϴ�. " << endl;
	}
	else {
		cout << inputX << " �� 0�� 10���̿� �����ϴ�. " << endl;
	}

	return 0;
}