#include <iostream>
#include <string>
using namespace std;

bool checkVowel(char c) {
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
	string password;
	while (true) {
		cin >> password;

		if (password == "end") {
			break;
		}

		int vowelCount = 0, consonantCount = 0;
        bool hasVowel = false;
        bool isValid = true;
		char lastChar = '0';
        for (int i = 0; i < password.length(); ++i) {
            char currentChar = password[i];

            if (checkVowel(currentChar)) {
                hasVowel = true;
                vowelCount++;
                consonantCount = 0;
            }
            else {
                vowelCount = 0;
                consonantCount++;
            }

            if (vowelCount == 3 || consonantCount == 3) {
                isValid = false;
                break;
            }

            if (i > 0 && currentChar == lastChar && currentChar != 'e' && currentChar != 'o') {
                isValid = false;
                break;
            }

            lastChar = currentChar;
        }

        if(!hasVowel) isValid = false;

        if (isValid)
            cout << "<" << password << "> is acceptable." << endl;
        else
            cout << "<" << password << "> is not acceptable." << endl;
	}

	return 0;
}