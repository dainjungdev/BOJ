#include <algorithm>
#include <iostream>

using namespace std;

int factor(int num, int prime) {
    int cnt = 0;
    while (num >= prime) {
        num /= prime;
        cnt += num;
    }
    return cnt;
}

int main() {
    int n, m;
    cin >> n >> m;
    int twos = factor(n, 2) - factor(m, 2) - factor(n - m, 2);
    int fives = factor(n, 5) - factor(m, 5) - factor(n - m, 5);
    cout << min(twos, fives);
    return 0;
}