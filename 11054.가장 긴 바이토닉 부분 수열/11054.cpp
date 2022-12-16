#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> lis(n, 1);
    vector<int> lds(n);
    vector<int> lbs(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Longest Increasing Subsequence
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (a[j] < a[i]) {
                lis[i] = max(lis[i], lis[j] + 1);
            }
        }
    }

    // Longest Decreasing Subsequence
    for (int i = n - 1; i >= 0; --i) {
        for (int j = n - 1; j > i; --j) {
            if (a[j] < a[i]) {
                lds[i] = max(lds[i], lds[j] + 1);
            }
        }
    }

    // Longest Bitonic Subsequence
    for (int i = 0; i < n; ++i) {
        lbs[i] = lis[i] + lds[i];
    }

    cout << *max_element(lbs.begin(), lbs.end());
    return 0;
}