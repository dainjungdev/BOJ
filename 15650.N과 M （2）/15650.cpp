#include <iostream>
#include <vector>

using namespace std;

int n, m;
bool visited[9];
vector<int> combination;

void dfs(int k) {
    if (combination.size() == m) {
        for (auto &num : combination) {
            cout << num << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = k; i <= n; ++i) {
        if (!visited[i]) {
            visited[i] = true;
            combination.push_back(i);
            dfs(i + 1);
            combination.pop_back();
            visited[i] = false;
        }
    }
}

int main() {
    cin >> n >> m;
    dfs(1);
    return 0;
}