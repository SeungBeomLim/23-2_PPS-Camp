class Solution {
public:
    string addBinary(string a, string b) {
        int a_length = a.size();
        int b_length = b.size();

        int upper = 0;
        string output = "";
        while (a_length > 0 || b_length > 0 || upper > 0) {
            int sum = upper;
            if (a_length > 0) sum += a[--a_length] - '0';
            if (b_length > 0) sum += b[--b_length] - '0';
            upper = sum / 2;
            output.push_back(sum % 2 + '0');
        }
        reverse(output.begin(), output.end());
        return output;
    }
};