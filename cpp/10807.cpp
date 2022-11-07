#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(10);
    int input;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        nums[i] = input;
    }

    int v;
    cin >> v;

    int cnt = 0;
    for (int num : nums) {
        if (num == v) {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}