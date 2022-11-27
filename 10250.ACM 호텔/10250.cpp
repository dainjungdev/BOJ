#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int h, w, n;
        cin >> h >> w >> n;

        int floor = n % h, room;

        if (floor != 0) {
            room = n / h + 1;
        } else {
            room = n / h;
            floor = h;
        }

        cout << floor * 100 + room << '\n';
    }

    return 0;
}