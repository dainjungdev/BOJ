#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n + 1);

    for (int i = 2; i <= n; ++i) {
        x[i] = min(x[i / 3] + i % 3, x[i / 2] + i % 2) + 1;
    }

    cout << x[n];
    return 0;
}