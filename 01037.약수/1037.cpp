#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> divisors(n);
    for (auto &divisor : divisors) {
        cin >> divisor;
    }
    int num = *max_element(divisors.begin(), divisors.end()) *
              *min_element(divisors.begin(), divisors.end());
    
    cout << num;
    return 0;
}