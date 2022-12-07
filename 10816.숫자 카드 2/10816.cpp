#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> cards(n);

    for (auto &card : cards) {
        cin >> card;
    }
    sort(cards.begin(), cards.end());

    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int num;
        cin >> num;
        cout << upper_bound(cards.begin(), cards.end(), num) -
                    lower_bound(cards.begin(), cards.end(), num)
             << ' ';
    }
    return 0;
}