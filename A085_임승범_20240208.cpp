#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(const string& a, const string& b) {
	if (a.length() != b.length()) return a.length() < b.length();

	int countA = 0, countB = 0;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] >= '0' && a[i] <= '9') countA += a[i] - '0';
		if (b[i] >= '0' && b[i] <= '9') countB += b[i] - '0';
	}

	if (countA != countB) return countA < countB;

	return a < b;
}

int main() {
	int N;
	cin >> N;

	vector<string> arr;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;

		arr.push_back(str);
	}

	sort(arr.begin(), arr.end(), compare);

	for (string s : arr) {
		cout << s << endl;
	}

	return 0;
}