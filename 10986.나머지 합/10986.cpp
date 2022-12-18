#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;

    vector<long long> remainder(m);
    int num;
    int prefix_sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> num;
        prefix_sum = (prefix_sum + num) % m;
        remainder[prefix_sum]++;
    }

    long long cnt = remainder[0];
    for (auto &elem : remainder) {
        cnt += (elem * (elem - 1) / 2);
    }

    cout << cnt;
    return 0;
}