#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    int countPrimes(int n) /*�����佺�׳׽��� ü(�Ҽ� ���ϱ� �˰���)*/ {
        vector<int> primeNumber(n + 1);
        int answer = 0;

        for (int i = 2; i < n; i++) {
            primeNumber[i] = i;
        }

        for (int i = 2; i < sqrt(n); i++) {
            if (primeNumber[i] == 0)
                continue;
            for (int j = i * i; j < n; j += i)
                primeNumber[j] = 0;
        }

        for (int i = 2; i < n; i++) {
            if (primeNumber[i] != 0)
                answer++;
        }

        return answer;
    }
};