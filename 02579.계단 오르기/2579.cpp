#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> scores(n + 1);

    int score = 0;
    cin >> scores[1] >> score;
    scores[2] = scores[1] + score;

    for (int i = 3; i <= n; ++i) {
        scores[i] = max(scores[i - 3] + score, scores[i - 2]);
        cin >> score;
        scores[i] += score;
    }

    cout << scores[n];
    return 0;
}