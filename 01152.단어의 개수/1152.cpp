#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int cnt = 0;

    while (cin >> s) {
        cnt++;
    }
    cout << cnt;
    return 0;
}