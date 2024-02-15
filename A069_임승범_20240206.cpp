#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> arr(N, 0);
    int count = -1;
    cout << "<";

    for (int i = 0; i < N; i++) {
        int step = 0;
        while (step < K) {
            count = (count + 1) % N;
            if (arr[count] == 0) {
                step++;
            }
        }

        arr[count] = 1;
        cout << (count + 1);

        if (i != N - 1) {
            cout << ", ";
        }
    }
    cout << ">";

    return 0;
}

// count = (count + 1) % N; 원형으로 처리할 때 이렇게 넣음
// K번째 사람을 제거할 때 까지 1씩 증가