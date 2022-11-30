#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int sum = 0;
    sort(v.begin(), v.end());

    for (int i = 0; v[i] * 3 <= m && i < n; ++i) {
        for (int j = i + 1; v[i] * 2 + v[j] <= m && j < n; ++j) {
            for (int h = j + 1; v[i] + v[j] + v[h] <= m && h < n; ++h) {
                if (v[i] + v[j] + v[h] > sum) {
                    sum = v[i] + v[j] + v[h];
                }
            }
        }
    }

    cout << sum;

    return 0;
}