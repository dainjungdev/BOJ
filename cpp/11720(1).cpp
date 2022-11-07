#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string nums;
    cin >> n >> nums;

    int sum = 0;
    for (char& num : nums) {
        sum += (num - '0');
    }

    cout << sum;
    return 0;
}