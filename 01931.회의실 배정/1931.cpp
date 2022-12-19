#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    pair<int, int> conference[100000] = {};

    for (int i = 0; i < n; ++i) {
        cin >> conference[i].second >> conference[i].first;
    }
    sort(conference, conference + n);

    int cnt = 0;
    int end = 0;
    for (int i = 0; i < n; ++i) {
        if (conference[i].second >= end) {
            cnt++;
            end = conference[i].first;
        }
    }

    cout << cnt;
    return 0;
}
