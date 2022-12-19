#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (auto &elem : p) {
        cin >> elem;
    }

    sort(p.begin(), p.end());

    int total_sum = 0;
    int sum = 0;
    for (auto &elem : p) {
        sum += elem;
        total_sum += sum;
    }

    cout << total_sum;
    return 0;
}