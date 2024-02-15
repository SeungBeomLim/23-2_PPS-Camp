class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string answer = "";
        int min_length = 201;

        for (const string& str : strs) {
            if (str.size() < min_length) {
                min_length = str.size();
            }
        }

        for (int i = 0; i < min_length; i++) {
            char c = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] != c) {
                    return answer;
                }
            }
            answer += c;
        }

        return answer;
    }
};