#include <iostream>

using namespace std;

int main() {
	int total[5] = { 0 };

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			int score;
			cin >> score;
			total[i] += score;
		}
	}
	int max = 0, winner = 0;
	for (int i = 0; i < 5; i++) {
		if (total[i] > max) {
			max = total[i];
			winner = i + 1;
		}
			
	}
	cout << winner << " " << max;

	return 0;
}