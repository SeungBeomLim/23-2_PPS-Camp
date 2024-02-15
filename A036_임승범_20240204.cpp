#include <iostream>

using namespace std;

int Answer;

int main(int argc, char** argv)
{
	int T, test_case;
	int n, input;

	cin >> T;
	for (test_case = 0; test_case < T; test_case++) {
		Answer = 0;

		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> input;
			Answer ^= input;
		}

		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;
}