class Solution {
public:
    string convertToTitle(int columnNumber) {
        string output = "";

        while (columnNumber > 0) {
            int remainder = columnNumber % 26;
            if (remainder == 0) {
                output += 'Z';
                columnNumber = (columnNumber / 26) - 1;
            }
            else {
                output += (remainder - 1) + 'A';
                columnNumber /= 26;
            }
        }
        reverse(output.begin(), output.end());

        return output;
    }
};