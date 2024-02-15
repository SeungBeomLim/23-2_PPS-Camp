#include <string>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// a + b > b + a�� �ٽ�
bool compare(const string& a, const string& b) {
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    vector<string> arr;
    for (int num : numbers) {
        arr.push_back(to_string(num));
    }
    sort(arr.begin(), arr.end(), compare);

    if (arr[0] == "0") {
        return "0";
    }

    string answer = "";
    for (string s : arr) {
        answer += s;
    }

    return answer;
}