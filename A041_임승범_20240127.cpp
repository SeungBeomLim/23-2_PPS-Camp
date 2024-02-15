#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    string temp = "";

    bool check = true;
    for (char c : s) {
        if (c == ' ') {
            check = true;
            answer += c;
        }
        else if (check) {
            answer += toupper(c);
            check = false;
        }
        else {
            answer += tolower(c);
        }
    }
    return answer;
}