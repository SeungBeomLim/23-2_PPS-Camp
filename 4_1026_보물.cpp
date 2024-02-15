//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool compare(int i, int j)
//{
//	return j < i;
//}
//
//int main() {
//	int N = 0, num = 0, S = 0;
//	cin >> N;
//	vector<int> A, B;
//
//	for (int i = 0; i < 2; i++) {
//		if (i == 0) {
//			for (int j = 0; j < N; j++) {
//				cin >> num;
//				A.push_back(num);
//			}
//		}
//		if (i == 1) {
//			for (int j = 0; j < N; j++) {
//				cin >> num;
//				B.push_back(num);
//			}
//		}
//	}
//	
//	sort(A.begin(), A.end());
//	sort(B.begin(), B.end(), compare);
//	for (int k = 0; k < N; k++) {
//		S += A[k] * B[k];
//	}
//
//	cout << S;
//}