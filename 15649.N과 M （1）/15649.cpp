#include <iostream>
#include <vector>

using namespace std;

int n, m;
bool visited[9];
vector<int> permutation;

void dfs(int k) {
    if (permutation.size() == m) {
        for (auto &num : permutation) {
            cout << num << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            visited[i] = true;
            permutation.push_back(i);
            dfs(k + 1);
            permutation.pop_back();
            visited[i] = false;
        }
    }
}

int main() {
    cin >> n >> m;
    dfs(1);
    return 0;
}