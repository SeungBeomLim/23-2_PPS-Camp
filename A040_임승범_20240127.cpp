class Solution {
public:
    bool halvesAreAlike(string s) {
        int countA = 0, countB = 0;
        int length = s.length();
        string a = s.substr(0, length / 2);
        string b = s.substr(length / 2, length / 2);
        for (char c : a) {
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                countA++;
            }
        }

        for (char c : b) {
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                countB++;
            }
        }

        return countA == countB;
    }
};