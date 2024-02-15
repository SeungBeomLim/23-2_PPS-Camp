#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string str;
	cin >> str;
	int count[26] = { 0 };
	

	for (char c : str) {
		c = tolower(c);
		int index = c - 'a';
		count[index]++;
	}
	
	int max = *max_element(count, count + 26);

	int t = 0;
	char result = '?';
	for (int i = 0; i < 26; i++) {
		if (max == count[i]) {
			t++;
			result = 'A' + i;
			if (t >= 2) {
				result = '?';
				break;
			}
		}
	}

	cout << result;

	return 0;
}