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

// GPT ���� �ڵ�
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<int, double>> failureRate(N); // ���������� �������� ������ ����

    // �� ������������ ������ ����� �� ���
    vector<int> stageReached(N, 0);
    for (int stage : stages) {
        if (stage <= N) {
            stageReached[stage - 1]++;
        }
    }

    int totalPlayers = stages.size(); // ��ü �÷��̾� ��

    // �� ���������� ������ ���
    for (int i = 0; i < N; i++) {
        double rate = 0;
        if (totalPlayers > 0) {
            rate = (double)stageReached[i] / totalPlayers;
            totalPlayers -= stageReached[i];
        }
        failureRate[i] = make_pair(i + 1, rate);
    }

    // �������� ���� ���� (���� �������� ��� ���� ��ȣ�� ���� ������)
    sort(failureRate.begin(), failureRate.end(), [](const pair<int, double>& a, const pair<int, double>& b) {
        if (a.second == b.second) return a.first < b.first;
        return a.second > b.second;
        });

    // ���ĵ� ������� �������� ��ȣ ����
    for (auto& p : failureRate) {
        answer.push_back(p.first);
    }

    return answer;
}
