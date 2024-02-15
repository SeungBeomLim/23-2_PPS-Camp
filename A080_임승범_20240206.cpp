class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int last = nums[0], count = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (last == nums[i]) {
                count++;
            }
            else {
                count = 0;
            }

            if (count >= nums.size() / 2) {
                break;
            }

            last = nums[i];
        }

        return last;
    }
};

// Boyer-Moore Voting Algorithm
//int count = 0;
//int candidate = 0;
//
//for (int num : nums) {
//    if (count == 0) {
//        candidate = num;
//    }
//    count += (num == candidate) ? 1 : -1;
//}
//
//return candidate;