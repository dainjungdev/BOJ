#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int s[21][21];
int n;
bool start_members[21];

int minimum = 19000;

void dfs(int k, int depth) {
    if (depth == n / 2) {
        int start = 0, link = 0;
        vector<int> start_team, link_team;
        for (int i = 1; i <= n; ++i) {
            if (start_members[i]) {
                for (int j : start_team) {
                    start += (s[i][j] + s[j][i]);
                }
                start_team.push_back(i);
            } else {
                for (int j : link_team) {
                    link += (s[i][j] + s[j][i]);
                }
                link_team.push_back(i);
            }
        }

        if (start == link) {
            cout << 0;
            exit(0);
        }

        minimum = min(minimum, abs(start - link));
        return;
    }

    for (int i = k; i <= n; ++i) {
        start_members[i] = true;
        dfs(i + 1, depth + 1);
        start_members[i] = false;
    }
}

int main() {
    ios::sync_with_stdio(false);

    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> s[i][j];
        }
    }

    dfs(1, 0);
    cout << minimum;
    return 0;
}