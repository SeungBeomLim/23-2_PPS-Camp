#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr(8);
    vector<int> asc = { 1, 2, 3, 4, 5, 6, 7, 8 };
    vector<int> des = { 8, 7, 6, 5, 4, 3, 2, 1 };
    int cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < arr.size(); i++) {
        cin >> arr.at(i);
    }

    for (int i = 0; i < 8; i++) {
        if (asc.at(i) == arr.at(i)) {
            cnt1++;
        }
        if (des.at(i) == arr.at(i)) {
            cnt2++;
        }
    }

    if (cnt1 == 8)
        cout << "ascending";
    else if (cnt2 == 8)
        cout << "descending";
    else
        cout << "mixed";
}