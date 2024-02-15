class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int index = 0;
        vector<int> output;
        for (const int number : nums1) {
            for (int i = 0; i < nums2.size(); i++) {
                if (number == nums2[i]) {
                    index = i;
                    break;
                }
            }

            bool check = false;
            if (index + 1 >= nums2.size()) {
                output.push_back(-1);
            }
            else {
                for (int i = index + 1; i < nums2.size(); i++) {
                    if (nums2[i] > number) {
                        output.push_back(nums2[i]);
                        check = true;
                        break;
                    }
                }
                if (!check) {
                    output.push_back(-1);
                }
            }
        }

        return output;
    }
};