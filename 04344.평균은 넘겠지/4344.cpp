#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    cin >> c;

    for (int i = 0; i < c; ++i) {
        int n;
        cin >> n;

        vector<double> scores(n);
        double sum = 0;

        for (int j = 0; j < n; ++j) {
            cin >> scores[j];
            sum += scores[j];
        }

        double avg = sum / n;
        double cnt = 0;

        for (double& score : scores) {
            if (score > avg) {
                cnt++;
            }
        }

        cout.precision(3);
        cout << fixed << 100 * cnt / n << "%\n";
    }
    return 0;
}
