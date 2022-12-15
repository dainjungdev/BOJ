#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> sum(n + 1);
    vector<int> temp(n + 1);

    int num;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cin >> num;
            temp[j] = num + max(sum[j - 1], sum[j]);
        }
        sum = temp;
    }

    cout << *max_element(sum.begin(), sum.end());
    return 0;
}