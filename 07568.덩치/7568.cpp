#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
    }

    for (int i = 0; i < n; ++i) {
        int rank = 1 + count_if(v.begin(), v.end(), [&](pair<int, int> p) {
                       return p.first > v[i].first && p.second > v[i].second;
                   });
        cout << rank << ' ';
    }
    
    return 0;
}