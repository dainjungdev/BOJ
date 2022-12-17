#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> prefix_sum(n + 1);
    int num;
    for (int i = 1; i <= n; ++i) {
        cin >> num;
        prefix_sum[i] = prefix_sum[i - 1] + num;
    }

    int a, b;
    for (int i = 0; i < m; ++i) {
        cin >> a >> b;
        cout << prefix_sum[b] - prefix_sum[a - 1] << '\n';
    }

    return 0;
}