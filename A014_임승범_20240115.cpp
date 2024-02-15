class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int start = nums[0];
        string temp = "";
        vector<string> answer;

        for (int i = 0; i < nums.size(); i++) {
            if (i == nums.size() - 1 || nums[i] + 1 != nums[i + 1]) {
                if (start == nums[i]) {
                    answer.push_back(to_string(start));
                }
                else {
                    answer.push_back(to_string(start) + "->" + to_string(nums[i]));
                }
                if (i != nums.size() - 1) {
                    start = nums[i + 1];
                }
            }
        }

        return answer;
    }
};