#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    int countPrimes(int n) /*에라토스테네스의 체(소수 구하기 알고리즘)*/ {
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