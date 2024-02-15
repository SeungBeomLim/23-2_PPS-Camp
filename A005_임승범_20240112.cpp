#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    unordered_set<char> set(skill.begin(), skill.end());
    int answer = 0, idx = 0;

    for (int i = 0; i < skill_trees.size(); i++) {
        idx = 0;
        for (const auto c : skill_trees[i]) {
            if (set.find(c) != set.end()) {
                if (c != skill[idx]) {
                    answer--;
                    break;
                }
                idx++;
            }
        }
        answer++;
    }

    return answer;
}