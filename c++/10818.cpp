#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    int min = 1000000, max = -1000000;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        min = (min < a) ? min : a;
        max = (max > a) ? max : a;
    }

    cout << min << ' ' << max;
    return 0;
}