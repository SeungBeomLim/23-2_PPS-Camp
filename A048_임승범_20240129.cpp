#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, count = 0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;

        bool isGroupWord = true;
        bool alpha[26] = { false };
        char lastChar = ' ';

        for (char ch : word) {
            if (lastChar != ch) {
                if (alpha[ch - 'a']) {
                    isGroupWord = false;
                    break;
                }
                alpha[ch - 'a'] = true;
            }
            lastChar = ch;
        }

        if (isGroupWord) count++;
    }

    cout << count;

    return 0;
}
