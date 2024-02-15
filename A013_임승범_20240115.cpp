#include <vector>
#include <algorithm>

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    nums[i] = 0, nums[j] = 0;
                    break;
                }
            }
        }
        sort(nums.begin(), nums.end());
        if (nums.back() == 0) {
            reverse(nums.begin(), nums.end());
        }
        return nums.back();
    }
};