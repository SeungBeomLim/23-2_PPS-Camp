#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    for (int i = 0; i < T; ++i) {
        string str;
        getline(cin, str);

        double result = 0;
        stringstream ss(str);

        ss >> result;

        char operation;
        while (ss >> operation) {
            switch (operation) {
            case '@':
                result *= 3;
                break;
            case '%':
                result += 5;
                break;
            case '#':
                result -= 7;
                break;
            default:
                break;
            }
        }

        cout << fixed << setprecision(2) << result << endl;
    }

    return 0;
}
