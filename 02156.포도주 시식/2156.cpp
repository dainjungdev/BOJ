#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> wine(n + 1);
    vector<int> glass(n + 1);

    for (int i = 1; i <= n; ++i) {
        cin >> glass[i];
    }

    wine[1] = glass[1];
    wine[2] = glass[1] + glass[2];

    for (int i = 3; i <= n; ++i) {
        wine[i] = max({wine[i - 3] + glass[i - 1] + glass[i],
                       wine[i - 2] + glass[i], wine[i - 1]});
    }

    cout << wine[n];
    return 0;
}