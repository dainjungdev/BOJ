#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    // Knapsack Algorithm
    vector<int> dp(k + 1);
    int w, v;
    for (int i = 0; i < n; ++i) {
        cin >> w >> v;
        for (int j = k; j >= w; --j) {
            dp[j] = max(dp[j], dp[j - w] + v);
        }
    }

    cout << dp[k];
    return 0;
}