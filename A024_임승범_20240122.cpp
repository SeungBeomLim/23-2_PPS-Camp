class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> arr(3, 0);
        for (const auto i : bills) {
            if (i == 5)
                arr[0]++;
            else if (i == 10) {
                if (arr[0] < 1)
                    return false;
                arr[0]--;
                arr[1]++;
            }
            else if (i == 20) {
                if (arr[1] > 0 && arr[0] > 0) {
                    arr[0]--;
                    arr[1]--;
                }
                else if (arr[0] >= 3)
                    arr[0] -= 3;
                else
                    return false;
            }
        }
        return true;
    }
};