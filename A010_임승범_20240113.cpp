#include <string>
#include <vector>

using namespace std;

int compressLength(string s, int len) {
    int compressedLength = 0;
    string prev = s.substr(0, len);
    int count = 1;

    for (int i = len; i < s.length(); i += len) {
        string sub = s.substr(i, len);
        if (prev == sub) {
            count++;
        }
        else {
            compressedLength += prev.length() + (count > 1 ? to_string(count).length() : 0);
            prev = sub;
            count = 1;
        }
    }

    compressedLength += prev.length() + (count > 1 ? to_string(count).length() : 0);
    return compressedLength;
}

int solution(string s) {
    int answer = s.length();
    for (int len = 1; len <= s.length() / 2; ++len) {
        answer = min(answer, compressLength(s, len));
    }
    return answer;
}