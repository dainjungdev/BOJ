#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> permutation_with_repetition;

void dfs(int k) {
    if (permutation_with_repetition.size() == m) {
        for (auto &num : permutation_with_repetition) {
            cout << num << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; ++i) {
        permutation_with_repetition.push_back(i);
        dfs(k + 1);
        permutation_with_repetition.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(false);

    cin >> n >> m;
    dfs(1);
    return 0;
}