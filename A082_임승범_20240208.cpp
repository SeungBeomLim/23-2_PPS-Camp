#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Member {
    int age;
    string name;
    int joinOrder;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<Member> members(N);

    for (int i = 0; i < N; i++) {
        cin >> members[i].age >> members[i].name;
        members[i].joinOrder = i;
    }

    sort(members.begin(), members.end(), [](const Member& a, const Member& b) {
        if (a.age == b.age) return a.joinOrder < b.joinOrder;
        return a.age < b.age;
        });

    for (const auto& member : members) {
        cout << member.age << ' ' << member.name << '\n';
    }

    return 0;
}
