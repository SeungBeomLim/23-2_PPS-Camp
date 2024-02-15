#include <iostream>

using namespace std;

int main() {
	int N = 0, time = 0, money_Y = 0, money_M = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> time;
		money_Y += (time / 30 + 1) * 10;
		money_M += (time / 60 + 1) * 15;
	}

	if (money_Y < money_M)
		cout << "Y " << money_Y;
	else if (money_M < money_Y)
		cout << "M " << money_M;
	else
		cout << "Y M " << money_Y;

	return 0;
}