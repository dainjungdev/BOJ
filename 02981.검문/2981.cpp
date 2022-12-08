#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &num : nums) {
        cin >> num;
    }

    int d = nums[1] - nums[0];
    for (int i = 1; i < n; ++i) {
        d = gcd(d, abs(nums[i] - nums[0]));
    }

    vector<int> m;
    for (int i = 1; i * i <= d; ++i) {
        if (d % i == 0) {
            m.push_back(i);
        }
    }

    for (auto i = m.begin() + 1; i != m.end(); ++i) {
        cout << *i << ' ';
    }

    if (m.back() * m.back() == d) {
        m.pop_back();
    }

    for (auto i = m.rbegin(); i != m.rend(); ++i) {
        cout << d / *i << ' ';
    }

    return 0;
}