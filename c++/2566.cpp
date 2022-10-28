#include <iostream>

using namespace std;

int main() {
    int nums[9][9] = {};
    int *max = *nums;

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cin >> nums[i][j];
            max = (*max > nums[i][j]) ? max : &nums[i][j];
        }
    }

    cout << *max << '\n';
    int idx = max - *nums;
    cout << idx / 9 + 1 << ' ' << idx % 9 + 1 << '\n';
    
    return 0;
}