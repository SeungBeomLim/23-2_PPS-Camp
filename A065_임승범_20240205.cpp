#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

int main() {
    // 시간 제한이 문제일 경우 입출력 설정
    ios_base::sync_with_stdio(false); // C++ 스트림과 C 스트림의 동기화를 끕니다.
    cin.tie(NULL); // cin과 cout의 묶음을 해제합니다.

    int N;
    cin >> N;
    vector<pair<int, int>> coordinates(N);

    for (int i = 0; i < N; i++) {
        cin >> coordinates[i].first >> coordinates[i].second;
    }

    sort(coordinates.begin(), coordinates.end(), compare);

    for (const auto& coord : coordinates) {
        cout << coord.first << ' ' << coord.second << '\n';
    }

    return 0;
}
