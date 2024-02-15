class Solution {
public:
    string removeOuterParentheses(string s) {
        int open = 0, close = 0;
        string answer = "", temp = "";
        for (char c : s) {
            if (c == '(') {
                open++;
                temp += c;
            }
            else if (c == ')') {
                close++;
                temp += c;
            }

            if (open == close) {
                open = 0, close = 0;
                temp.erase(0, 1);
                temp.pop_back();
                answer += temp;
                temp.clear();
            }
        }
        return answer;
    }
};