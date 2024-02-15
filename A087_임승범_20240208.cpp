class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] > b[1];
            });
        int totalBoxes = 0;
        for (int i = 0; i < boxTypes.size(); i++) {
            for (int j = 0; j < boxTypes[i][0]; j++) {
                if (truckSize != 0) {
                    totalBoxes += boxTypes[i][1];
                    truckSize--;
                }
            }
            if (truckSize == 0) break;
        }

        return totalBoxes;
    }
};