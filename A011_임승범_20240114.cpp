#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> stageUser(N);

    for (int i = 0; i < stages.size(); i++) {
        for (int j = 1; j <= N; j++) {
            if (stages[i] == j)
                stageUser[j - 1]++;
        }
    }

    vector<double> failure;
    int count = 0;
    for (auto i : stageUser) {
        if (i == 0) {
            failure.push_back(0);
        }
        else {
            failure.push_back((double)i / (stages.size() - count));
            count += i;
        }
    }

    vector<double> origin(failure);
    sort(failure.begin(), failure.end());
    reverse(failure.begin(), failure.end());

    vector<int> answer;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (failure[i] == origin[j]) {
                answer.push_back(j + 1);
                origin[j] = -1;
                break;
            }
        }
    }

    return answer;
}

// GPT 개선 코드
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<int, double>> failureRate(N); // 스테이지와 실패율을 저장할 벡터

    // 각 스테이지별로 도달한 사용자 수 계산
    vector<int> stageReached(N, 0);
    for (int stage : stages) {
        if (stage <= N) {
            stageReached[stage - 1]++;
        }
    }

    int totalPlayers = stages.size(); // 전체 플레이어 수

    // 각 스테이지의 실패율 계산
    for (int i = 0; i < N; i++) {
        double rate = 0;
        if (totalPlayers > 0) {
            rate = (double)stageReached[i] / totalPlayers;
            totalPlayers -= stageReached[i];
        }
        failureRate[i] = make_pair(i + 1, rate);
    }

    // 실패율에 따라 정렬 (같은 실패율일 경우 작은 번호가 먼저 오도록)
    sort(failureRate.begin(), failureRate.end(), [](const pair<int, double>& a, const pair<int, double>& b) {
        if (a.second == b.second) return a.first < b.first;
        return a.second > b.second;
        });

    // 정렬된 순서대로 스테이지 번호 저장
    for (auto& p : failureRate) {
        answer.push_back(p.first);
    }

    return answer;
}
