#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int carry = 0;
    string ans = "";

    for (auto i = a.rbegin(), j = b.rbegin(); i != a.rend() || j != b.rend();) {
        int sum = carry;

        if (i != a.rend()) {
            sum += *i - '0';
            ++i;
        }

        if (j != b.rend()) {
            sum += *j - '0';
            ++j;
        }

        carry = sum / 10;
        ans.push_back(char(sum % 10 + '0'));
    }

    if (carry) {
        ans.push_back('1');
    }

    reverse(ans.begin(), ans.end());
    cout << ans;
    return 0;
}