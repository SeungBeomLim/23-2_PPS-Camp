#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int Answer;

int main(int argc, char** argv)
{

    int T, test_case;
    cin >> T;
    for (test_case = 0; test_case < T; test_case++)
    {
        int N, K;
        cin >> N;
        cin >> K;

        vector<int> score(N);
        for (int i = 0; i < N; i++) {
            cin >> score[i];
        }

        sort(score.begin(), score.end());

        Answer = 0;
        for (int i = 0; i < K; i++) {
            Answer += score[N - 1 - i];
        }


        cout << "Case #" << test_case + 1 << endl;
        cout << Answer << endl;
    }

    return 0;
}