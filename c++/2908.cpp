#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    swap(a[0], a[2]);
    swap(b[0], b[2]);

    cout << (stoi(a) > stoi(b) ? a : b);
    return 0;
}