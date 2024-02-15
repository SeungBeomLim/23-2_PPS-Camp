#include <iostream>

using namespace std;

int main() {
	int A, B, C, product;
	int arr[10] = { 0 };
	cin >> A >> B >> C;
	product = A * B * C;
	while (product > 0) {
		for (int i = 0; i < 10; i++) {
			if (i == product % 10) {
				arr[i]++;
			}
		}
		product /= 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
}