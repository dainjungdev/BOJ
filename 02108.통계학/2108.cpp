#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> num(n);

    int sum = 0, max_cnt = 0;
    int cnt[8001] = {};

    for (auto &e : num) {
        cin >> e;
        sum += e;
        max_cnt = max(max_cnt, ++cnt[e + 4000]);
    }

    // Arithmetic Mean
    int arithemetic_mean = round(double(sum) / n);

    // Median
    sort(num.begin(), num.end());
    int median = num[n / 2];

    // Mode
    int mode;
    int mode_cnt = 0;
    for (int i = -4000; i <= 4000 && mode_cnt < 2; ++i) {
        if (cnt[i + 4000] == max_cnt) {
            mode = i;
            mode_cnt++;
        }
    }

    // Range
    int range = num[n - 1] - num[0];

    cout << arithemetic_mean << '\n';
    cout << median << '\n';
    cout << mode << '\n';
    cout << range << '\n';

    return 0;
}