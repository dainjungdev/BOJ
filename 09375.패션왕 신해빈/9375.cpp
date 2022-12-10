#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        unordered_map<string, int> outfits;
        string name, type;
        for (int j = 0; j < n; ++j) {
            cin >> name >> type;
            outfits[type]++;
        }
        int cases = 1;
        for (auto &outfit : outfits) {
            cases *= (outfit.second + 1);
        }
        cases--;
        cout << cases << '\n';
    }
    return 0;
}