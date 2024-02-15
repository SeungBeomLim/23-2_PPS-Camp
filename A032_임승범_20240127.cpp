#include <iostream>

using namespace std;

int main() {
	int t, k, n;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> k >> n;
		int apt[15][15] = { 0 };

		for (int j = 1; j <= n; j++) {
			apt[0][j] = j;
		}

		for (int floor = 1; floor <= k; floor++) {
			for (int room = 1; room <= n; room++) {
				for (int prevRoom = 1; prevRoom <= room; prevRoom++) {
					apt[floor][room] += apt[floor - 1][prevRoom];
				}
			}
		}

		cout << apt[k][n] << endl;
	}

	return 0;
}