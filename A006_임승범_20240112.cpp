#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int p = 0, y = 0;
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;
    for (const auto str : s) {
        if (str == 'p' || str == 'P')
            p++;
        else if (str == 'y' || str == 'Y')
            y++;
    }
    if (p == y)
        return true;
    else if (p != y)
        return false;

    return true;
}