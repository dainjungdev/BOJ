#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int r;
    cin >> r;
    cout << fixed;
    cout.precision(6);
    cout << r * r * M_PI << '\n';
    cout << r * r * 2 << '\n';
    return 0;
}