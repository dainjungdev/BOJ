#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<double> scores(n);
    int max = 0;

    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
        max = (max > scores[i]) ? max : scores[i];
    }

    double sum = 0;

    for (double& score : scores) {
        sum += score / max * 100;
    }

    cout << sum / n;
    return 0;
}