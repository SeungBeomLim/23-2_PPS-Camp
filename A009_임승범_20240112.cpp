#include <string>
#include <vector>

using namespace std;

bool solution(string s) {

    if (s.size() == 4 || s.size() == 6) {
        for (const char c : s) {
            if (isdigit(c)) {}
            else return false;
        }
        return true;
    }
    else
        return false;
}