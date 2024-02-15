#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

int main() {
    // �ð� ������ ������ ��� ����� ����
    ios_base::sync_with_stdio(false); // C++ ��Ʈ���� C ��Ʈ���� ����ȭ�� ���ϴ�.
    cin.tie(NULL); // cin�� cout�� ������ �����մϴ�.

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
