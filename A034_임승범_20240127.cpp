#include <iostream>

using namespace std;

int main() {
	int arr[10], count = 0;
	for (int i = 0; i < 10; i++) {
		int num;
		cin >> num;
		arr[i] = num % 42;
	}

	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (arr[i] == arr[j]) {
				count--;
				break;
			}
		}
		count++;
	}

	cout << count;

	return 0;
}