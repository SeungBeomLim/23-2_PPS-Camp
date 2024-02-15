#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second;
}

int main() {
    vector<pair<int, int>> score(8);

    for (int i = 0; i < 8; ++i) {
        int temp;
        cin >> temp;
        score[i] = { i + 1, temp };
    }

    sort(score.begin(), score.end(), compare);

    int total = 0;
    for (int i = 0; i < 5; ++i) {
        total += score[i].second;
    }
    cout << total << "\n";

    vector<int> seq;
    for (int i = 0; i < 5; ++i) {
        seq.push_back(score[i].first);
    }

    sort(seq.begin(), seq.end());

    for (int i = 0; i < 5; ++i) {
        cout << seq[i] << " ";
    }

    return 0;
}