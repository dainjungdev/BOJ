#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<double> scores(n);
    int max = 0;

    for (double& score : scores) {
        cin >> score;
        max = (max > score) ? max : score;
    }

    double sum = 0;

    for (double& score : scores) {
        sum += score / max * 100;
    }

    cout << sum / n;
    return 0;
}