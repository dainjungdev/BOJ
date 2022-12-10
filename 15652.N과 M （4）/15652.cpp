#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> combination_with_repetition;

void dfs(int k) {
    if (combination_with_repetition.size() == m) {
        for (auto &num : combination_with_repetition) {
            cout << num << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = k; i <= n; ++i) {
        combination_with_repetition.push_back(i);
        dfs(i);
        combination_with_repetition.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(false);

    cin >> n >> m;
    dfs(1);
    return 0;
}