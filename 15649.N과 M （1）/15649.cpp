#include <iostream>
#include <vector>

using namespace std;

int n, m;
bool visited[9];
vector<int> permutation;

void DFS(int cnt) {
    if (cnt == m) {
        for (auto &num : permutation) {
            cout << num << ' ';
        }
        cout << '\n';
    }

    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            visited[i] = true;
            permutation.push_back(i);
            DFS(cnt + 1);
            permutation.pop_back();
            visited[i] = false;
        }
    }
}

int main() {
    cin >> n >> m;
    DFS(0);
    return 0;
}