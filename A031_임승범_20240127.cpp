#include <iostream>

using namespace std;

int main() {
	int N, M;
	int count = 0;
	cin >> N >> M;
	
	cout << N * M - 1;

}

// 초콜릿을 자르면 두 조각으로 나눠지므로 1x1 까지 다 자르면 N * M번 자른 횟수 + 1 만큼 잘라야함.