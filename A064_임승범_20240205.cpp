class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> checkArr;
        checkArr = heights;
        sort(checkArr.begin(), checkArr.end());

        int answer = 0;
        for (int i = 0; i < heights.size(); i++) {
            if (checkArr[i] != heights[i])
                answer++;
        }

        return answer;
    }
};