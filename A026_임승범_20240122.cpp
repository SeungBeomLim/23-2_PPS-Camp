#include <iostream>

using namespace std;

bool solution(int x) {
    int answer = x;
    int div = 0;
    while (x > 0) {
        div += x % 10;
        x /= 10;
    }

    if (answer % div == 0)
        return true;
    else
        return false;


}