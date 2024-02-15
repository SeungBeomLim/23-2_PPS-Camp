#include <iostream>
#include <string>

using namespace std;

int main() {
	int player_count;
	cin >> player_count;


	int count[26] = { 0 };
	for (int i = 0; i < player_count; i++) {
		string surname;
		cin >> surname;
		int index = surname[0] - 'a';
		count[index]++;
	}

	bool found = false;
	for (int i = 0; i < 26; i++) {
		if (count[i] >= 5) {
			cout << char('a' + i);
			found = true;
		}
	}

	if (!found) {
		cout << "PREDAJA";
	}

	return 0;
}