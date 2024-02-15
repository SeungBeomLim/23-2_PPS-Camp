class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 2) {
            return true;
        }

        long long left = 2, right = num / 2, x, ans;
        for (int i = left; i <= right; i++) {
            x = left + (right - left) / 2;

            if (x * x == num) {
                return true;
            }

            if (x * x < num) {
                left = x + 1;
            }
            else {
                right = x - 1;
            }
        }

        return false;
    }
};