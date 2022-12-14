#include <iostream>

using namespace std;

int f[41];
int recursive_cnt, dynamic_cnt;

int fib(int n) {
    if (n == 1 or n == 2) {
        recursive_cnt++;
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int fibonacci(int n) {
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= n; ++i) {
        dynamic_cnt++;
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

int main() {
    int n;
    cin >> n;

    fib(n);
    fibonacci(n);

    cout << recursive_cnt << ' ' << dynamic_cnt;
    return 0;
}