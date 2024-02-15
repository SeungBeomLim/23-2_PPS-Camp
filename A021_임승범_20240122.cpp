#include <iostream>

using namespace std;

int main() {
	int multitap = 0, answer = 1, plug = 0;

	cin >> multitap;
	for (int i = 0; i < multitap; i++) {
		cin >> plug;

		if (plug == 1) {
			continue;
		}
		else {
			answer = answer + plug - 1;
		}
	}
	cout << answer;

	return 0;
}