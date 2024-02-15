#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> cookie) {
    int result = 0;

    for (int m = 0; m < cookie.size() - 1; m++) {
        int leftSum = cookie[m];
        int rightSum = cookie[m + 1];
        int l = m, r = m + 1;

        while (true) {
            if (leftSum == rightSum) {
                result = max(result, leftSum);
            }

            if (l > 0 && (leftSum <= rightSum || r == cookie.size() - 1)) {
                l--;
                leftSum += cookie[l];
            }
            else if (r < cookie.size() - 1) {
                r++;
                rightSum += cookie[r];
            }
            else {
                break;
            }
        }
    }

    return result;
}
