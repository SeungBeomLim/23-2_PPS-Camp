#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> arr;
        for (int i = left; i <= right; i++) {
            int num = i;
            bool check = false;
            while (num > 0) {
                if (num % 10 != 0) {
                    if (i % (num % 10) == 0) {
                        check = true;
                    }
                    else {
                        check = false;
                        break;
                    }
                }
                else {
                    check = false;
                    break;
                }
                num /= 10;
            }
            if (check == true) {
                arr.push_back(i);
            }
        }

        return arr;
    }
};