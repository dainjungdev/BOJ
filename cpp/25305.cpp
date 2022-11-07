#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> num(n);

    for (int i = 0; i < n; ++i) {
        cin >> num[i];
    }

    sort(num.begin(), num.end(), greater<>());
    cout << num[k - 1];

    return 0;
}