class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> score;

        for (string op : operations) {
            if (isdigit(op[0]) || (op[0] == '-' && op.size() > 1)) {
                score.push_back(stoi(op));
            }
            else if (op[0] == 'C') {
                score.pop_back();
            }
            else if (op[0] == 'D') {
                score.push_back(score.back() * 2);
            }
            else if (op[0] == '+') {
                int num1 = score.back();
                score.pop_back();
                int num2 = score.back();
                score.push_back(num1);
                score.push_back(num1 + num2);
            }
        }
        int sum = 0;
        for (int s : score) {
            sum += s;
        }

        return sum;
    }
};

// stoi를 사용하면 음수도 바로 가능