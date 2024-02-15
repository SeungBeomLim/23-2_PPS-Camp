class Solution {
public:
    bool isPalindrome(string s) {
        string arr = "";
        for (int i = 0; i < s.length(); i++) {
            char c = tolower(s[i]);
            if (c >= 'a' && c <= 'z' || c >= '0' && c <= '9') {
                arr += c;
            }
        }
        string check = arr;
        reverse(check.begin(), check.end());

        return arr == check;
    }
};