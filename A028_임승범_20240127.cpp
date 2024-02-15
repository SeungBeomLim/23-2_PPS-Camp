#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string A, B;

    cin >> A >> B;

    string answer = "";
    int carry = 0, sum = 0;
    size_t n = max(A.length(), B.length());

    for (size_t i = 0; i < n; i++) {
        sum = carry;

        if (i < A.length()) {
            sum += A[A.length() - 1 - i] - '0';
        }

        if (i < B.length()) {
            sum += B[B.length() - 1 - i] - '0';
        }

        carry = sum / 10;
        answer.push_back(sum % 10 + '0');
    }

    if (carry) {
        answer.push_back(carry + '0');
    }

    reverse(answer.begin(), answer.end());

    cout << answer;

    return 0;
}