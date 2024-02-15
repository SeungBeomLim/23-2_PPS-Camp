#include <iostream>

using namespace std;

int main() {
    int N;
    bool method;

    cin >> N >> method;

    if (N >= 6) {
        cout << "Love is open door";
        return 0;
    }
    else {
        for (int i = 1; i < N; i++) {
            method = !method;
            cout << method << endl;
        }
    }

    return 0;
}