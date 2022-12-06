#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    unordered_map<string, int> name_to_num;
    name_to_num.reserve(n);
    vector<string> num_to_name(n + 1);
    for (int i = 1; i <= n; ++i) {
        string s;
        cin >> s;
        num_to_name[i] = s;
        name_to_num[s] = i;
    }

    for (int i = 0; i < m; ++i) {
        string s;
        cin >> s;
        if (isdigit(s[0])) {
            cout << num_to_name[stoi(s)] << '\n';
        } else {
            cout << name_to_num[s] << '\n';
        }
    }
    return 0;
}