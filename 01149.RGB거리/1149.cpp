#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int min_price[3] = {};
    int r, g, b;

    for (int i = 0; i < n; ++i) {
        cin >> r >> g >> b;
        r += min(min_price[1], min_price[2]);
        g += min(min_price[0], min_price[2]);
        b += min(min_price[0], min_price[1]);
        min_price[0] = r, min_price[1] = g, min_price[2] = b;
    }
    cout << *min_element(min_price, min_price+3);
    return 0;
}