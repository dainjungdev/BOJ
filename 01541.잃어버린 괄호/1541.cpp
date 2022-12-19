#include <iostream>
#include <string>

using namespace std;

bool minus_flag;
int res;
int num;

void calculate() {
    if (minus_flag) {
        res -= num;
    } else {
        res += num;
    }
    num = 0;
}

int main() {
    char c;
    while (cin >> num) {
        calculate();
        cin >> c;
        if (c == '-') {
            minus_flag = true;
        }
    }
    cout << res;
    return 0;
}