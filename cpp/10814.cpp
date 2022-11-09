#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int, string>> members(n);

    for (int i = 0; i < n; ++i) {
        int age;
        string name;
        cin >> age >> name;
        members[i] = make_pair(age, name);
    }

    stable_sort(members.begin(), members.end(), [](auto &left, auto &right) {
        return (left.first < right.first);
    });

    for (auto &member : members) {
        cout << member.first << ' ' << member.second << '\n';
    }

    return 0;
}