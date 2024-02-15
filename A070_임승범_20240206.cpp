#include <iostream>
#include <queue>

using namespace std;

int main() {
	int N;
	cin >> N;
	queue<int> cardSet;

	for (int i = 1; i <= N; i++) {
		cardSet.push(i);
	}

	while (cardSet.size() > 1) {
		cardSet.pop();
		int top = cardSet.front();
		cardSet.pop();
		cardSet.push(top);
	}

	cout << cardSet.front();

	return 0;
}