#include <iostream>
#include <unordered_set>

using namespace std;

int cnt = 0;

void insert_elements(unordered_set<int> &s, int &size) {
    s.reserve(size);
    int elem;
    for (int i = 0; i < size; ++i) {
        cin >> elem;
        s.insert(elem);
    }
}

void count_difference(unordered_set<int> &s1, unordered_set<int> &s2) {
    for (auto &elem : s1) {
        if (s2.find(elem) == s2.end()) {
            cnt++;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    unordered_set<int> a, b;
    insert_elements(a, n);
    insert_elements(b, m);

    count_difference(a, b);
    count_difference(b, a);

    cout << cnt;
    return 0;
}