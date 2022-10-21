#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        string results;
        cin >> results;

        int cnt = 0;
        int score = 0;

        for (char& result : results) {
            if (result == 'O') {
                cnt += 1;
            } else {
                cnt = 0;
            }
            score += cnt;
        }

        cout << score << '\n';
    }
    return 0;
}