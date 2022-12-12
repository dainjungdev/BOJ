#include <algorithm>
#include <iostream>

using namespace std;

int a[11];
int op[4]; // + - × ÷
int maximum = -1e9, minimum = 1e9;
int n;

void dfs(int k, int ans) {
    if (k == n) {
        maximum = max(maximum, ans);
        minimum = min(minimum, ans);
        return;
    }

    for (int i = 0; i < 4; ++i) {
        if (op[i]) {
            op[i]--;
            switch (i) {
            case 0:
                dfs(k + 1, ans + a[k]);
                break;
            case 1:
                dfs(k + 1, ans - a[k]);
                break;
            case 2:
                dfs(k + 1, ans * a[k]);
                break;
            case 3:
                dfs(k + 1, ans / a[k]);
                break;
            }
            op[i]++;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cin >> op[0] >> op[1] >> op[2] >> op[3];

    dfs(1, a[0]);
    cout << maximum << '\n';
    cout << minimum << '\n';
    return 0;
}