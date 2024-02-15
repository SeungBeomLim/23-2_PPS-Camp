class Solution {
public:
    bool checkRecord(string s) {
        int total_absent = 0;
        int total_late = 0;

        for (const char c : s) {
            if (c == 'A') {
                total_absent++;
                total_late = 0;
                if (total_absent >= 2) {
                    return false;
                }
            }
            else if (c == 'L') {
                total_late++;
                if (total_late >= 3) {
                    return false;
                }
            }
            else {
                total_late = 0;
            }
        }

        return true;
    }
};