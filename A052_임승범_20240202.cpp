#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        string temp = "";
        cin >> temp;
        int score = 1, total_score = 0;
        for (char c : temp) {
            if (c == 'O') {
                total_score += score;
                score++;
            }
            else if (c == 'X') {
                score = 1;
            }
        }
        cout << total_score << endl;
    }

    return 0;
}