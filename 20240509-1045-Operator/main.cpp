#include <iostream>

using namespace std;

int main() {
	int inputX = 0;

	cout << " 정수 값을 입력하세요 ";
	cin >> inputX; // cin 값을 키보드로 부터 입력 받을 떄 사용

	bool isinside = false;

	isinside = 0 < inputX && inputX < 10;

	if (isinside) {
		cout << inputX << " 는 0과 10사이에 있습니다. " << endl;
	}
	else {
		cout << inputX << " 는 0과 10사이에 없습니다. " << endl;
	}

	return 0;
}