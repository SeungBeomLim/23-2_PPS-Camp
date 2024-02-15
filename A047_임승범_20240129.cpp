#include <iostream>
#include <string>

using namespace std;

int main() {
	string temp = "";
	cin >> temp;

	int count = 0;
	for (const char c : temp) {
		cout << c;
		count++;
		if (count == 10) {
			count = 0;
			cout << endl;
		}
	}

	return 0;
}