#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string numToAlpha(char ch) {
	switch (ch) {
	case '0': return "zero";
	case '1': return  "one";
	case '2': return  "two";
	case '3': return  "three";
	case '4': return  "four";
	case '5': return  "five";
	case '6': return  "six";
	case '7': return  "seven";
	case '8': return  "eight";
	case '9': return  "nine";
	default: return "";
	}
}

bool compare(const string& a, const string& b) {
	int minLength = min(a.length(), b.length());
	for (int i = 0; i < minLength; i++) {
		string aAlpha = numToAlpha(a[i]);
		string bAlpha = numToAlpha(b[i]);

		if (aAlpha != bAlpha) {
			return aAlpha < bAlpha;
		}
	}

	return a.length() < b.length();
}

int main() {
	int M, N;
	cin >> M >> N;

	vector<string> arr;
	for (int i = M; i <= N; i++) {
		arr.push_back(to_string(i));
	}

	sort(arr.begin(), arr.end(), compare);

	int count = 0;
	for (const string& s : arr) {
		cout << s << " ";
		count++;
		if (count == 10) {
			cout << "\n";
			count = 0;
		}
	}

	return 0;
}