#include <iostream>
#include <string>

using namespace std;

int main() {
	string word;
	cin >> word;

	string newWord = "";

	for (char c : word) {
		if (c >= 'A' && c <= 'C') {
			newWord += (char)(c + 23);
		}
		else {
			newWord += (char)(c - 3);
		}
	}

	cout << newWord;

	return 0;
}