#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string S;
    cin >> S;
    vector<string> strArr;

    for (int i = 0; i < S.length(); i++) {
        strArr.push_back(S.substr(i));
    }

    sort(strArr.begin(), strArr.end());

    for (const string& s : strArr) {
        cout << s << endl;
    }

    return 0;
}