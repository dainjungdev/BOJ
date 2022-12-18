#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (auto &elem : a) {
        cin >> elem;
    }

    int cnt = 0;
    while (k) {
        cnt += (k / a.back());
        k %= a.back();
        a.pop_back();
    }

    cout << cnt;
    return 0;
}