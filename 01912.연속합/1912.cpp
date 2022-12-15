#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int num;
    int partial_sum = 0;
    int max_partial_sum = -1000;

    for (int i = 0; i < n; ++i) {
        cin >> num;

        if (partial_sum > 0) {
            partial_sum += num;
        } else {
            partial_sum = num;
        }

        max_partial_sum =
            max_partial_sum > partial_sum ? max_partial_sum : partial_sum;
    }

    cout << max_partial_sum;
    return 0;
}