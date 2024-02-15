#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(const string& a, const string& b) {
    if (a.length() == b.length()) {
        return a < b;
    }
    return a.length() < b.length();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t) {
        int N;
        cin >> N;

        vector<string> names(N);
        for (int i = 0; i < N; ++i) {
            cin >> names[i];
        }

        sort(names.begin(), names.end(), compare);

        names.erase(unique(names.begin(), names.end()), names.end());

        cout << "#" << t << "\n";
        for (const string& name : names) {
            cout << name << "\n";
        }
    }

    return 0;
}
