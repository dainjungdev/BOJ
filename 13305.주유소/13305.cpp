#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    vector<int> distance(n - 1);
    for (auto &d : distance) {
        cin >> d;
    }

    long long total_price = 0;
    int min_price = 1000000000;
    int price;

    for (auto &d : distance) {
        cin >> price;
        min_price = min(min_price, price);
        total_price += (long long)min_price * d;
    }
    cout << total_price;
    return 0;
}