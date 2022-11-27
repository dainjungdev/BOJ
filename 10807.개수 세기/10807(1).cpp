#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int cnt[201] = {};
    int input;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        cnt[input + 100]++;
    }

    int v;
    cin >> v;
    cout << cnt[v + 100];
    return 0;
}