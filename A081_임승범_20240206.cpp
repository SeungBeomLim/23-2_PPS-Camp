#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        vector<int> arr(10);

        for (int j = 0; j < 10; j++) {
            cin >> arr[j];
        }

        sort(arr.begin(), arr.end());
        cout << arr[7] << endl;
    }

    return 0;
}