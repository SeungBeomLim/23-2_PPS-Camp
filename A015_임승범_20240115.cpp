#include <iostream>

using namespace std;

int main() {
    int input, num = 0;

    for (int i = 0; i < 5; i++) {
        cin >> input;
        num += input * input;
    }

    cout << num % 10;

    return 0;
}