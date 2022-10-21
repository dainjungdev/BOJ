#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = n;

    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;

        bool a[26] = {};
        char prev;
        for (char &curr : word) {
            if (!a[curr - 'a']) {
                a[curr - 'a'] = true;
                prev = curr;
            } else if (prev != curr) {
                cnt--;
                break;
            }
        }
    }

    cout << cnt;
    return 0;
}
