#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    vector<char> selected;

    for (char digit : number) {
        while (!selected.empty() && k > 0 && selected.back() < digit) {
            selected.pop_back();
            k--;
        }
        selected.push_back(digit);
    }

    while (k--) {
        selected.pop_back();
    }

    for (char digit : selected) {
        answer += digit;
    }

    return answer;
}