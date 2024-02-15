#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    sort(citations.begin(), citations.end(), greater<int>());

    int hIndex = 0;
    for (int i = 0; i < citations.size(); ++i) {
        if (citations[i] > i) {
            hIndex = i + 1;
        }
        else {
            break;
        }
    }

    return hIndex;
}

// H-index구하기 문제