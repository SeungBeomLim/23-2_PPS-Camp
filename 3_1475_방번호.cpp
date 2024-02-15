//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	int roomNumber;
//	int arr[10] = { 0 };
//	int res;
//
//	cin >> roomNumber;
//
//	while (roomNumber != 0) {
//		res = roomNumber % 10;
//		for (int i = 0; i < 10; i++) {
//			if (res == i) {
//				arr[i]++;
//				break;
//			}
//		}
//		roomNumber /= 10;
//	}
//	int six_nine_count = (arr[6] + arr[9] + 1) / 2;
//	int maxCount = 0;
//	for (int j = 0; j < 10; j++) {
//		if (j != 6 && j != 9) {
//			maxCount = max(maxCount, arr[j]);
//		}
//	}
//	maxCount = max(maxCount, six_nine_count);
//	cout << maxCount;
//}