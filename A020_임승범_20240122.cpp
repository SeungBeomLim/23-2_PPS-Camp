#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int in = 0, out = 0, people = 0;
	int maxPeople = 0;
	
	for (int i = 0; i < 4; i++) {
		cin >> out >> in;
		people = people + in - out;
		maxPeople = max(maxPeople, people);
	}

	cout << maxPeople;

	return 0;
}