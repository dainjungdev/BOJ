#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    int partial_sum = 0;
    for (int i = 0; i < k; ++i) {
        cin >> a[i];
        partial_sum += a[i];
    }

    int max_sum = partial_sum;
    for (int i = k; i < n; ++i) {
        cin >> a[i];
        partial_sum += (a[i] - a[i - k]);
        max_sum = max(max_sum, partial_sum);
    }

    cout << max_sum;
    return 0;
}