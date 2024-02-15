#include <iostream>

using namespace std;

int main() {
	int N;
	bool feeling;
	double arr[4];
	double happy = 0, sad = 0;

	cin >> N >> feeling;
	for (int i = 0; i < 4; i++) {
		cin >> arr[i];
	}

	if (feeling == 0) {
		happy = 1;
		sad = 0;
	}
	else {
		happy = 0;
		sad = 1;
	}

	for (int i = 1; i <= N; i++) {
		double nextHappy = happy * arr[0] + sad * arr[2];
		double nextSad = happy * arr[1] + sad * arr[3];
		happy = nextHappy;
		sad = nextSad;
	}

	printf("%.0f\n", happy * 1000);
	printf("%.0f\n", sad * 1000);

	return 0;
}