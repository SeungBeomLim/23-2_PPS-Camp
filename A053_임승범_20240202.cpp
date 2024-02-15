#include <iostream>
#include <stack>

using namespace std;

int main() {
	int N;
	cin >> N;

	stack<int> arr;
	for (int i = 0; i < N; i++) {
		string operation;
		cin >> operation;

		if (operation == "push") {
			int X;
			cin >> X;
			arr.push(X);
		}
		else if (operation == "pop") {
			if (arr.empty()) cout << -1 << endl;
			else {
				cout << arr.top() << endl;
				arr.pop();
			}
		}
		else if (operation == "size") {
			cout << arr.size() << endl;
		}
		else if (operation == "empty") {
			cout << arr.empty() ? 1 : 0;
			cout << endl;
		}
		else if (operation == "top") {
			if (arr.empty()) cout << -1 << endl;
			else {
				cout << arr.top() << endl;
			}
		}
	}

	return 0;
}