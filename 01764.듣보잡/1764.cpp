#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    string name;

    unordered_set<string> unheard;
    unheard.reserve(n);
    for (int i = 0; i < n; ++i) {
        cin >> name;
        unheard.insert(name);
    }

    set<string> unheard_unseen;
    for (int i = 0; i < m; ++i) {
        cin >> name;
        if (unheard.find(name) != unheard.end()) {
            unheard_unseen.insert(name);
        }
    }

    cout << unheard_unseen.size() << '\n';
    for (auto &name : unheard_unseen) {
        cout << name << '\n';
    }

    return 0;
}