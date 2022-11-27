#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cin >> word;

    int cnt = 0;
    for (int i = 0; i < word.length(); ++i) {
        switch (word[i]) {
        case '-':
            break;
        case '=':
            if (word[i - 1] == 'z' && word[i - 2] == 'd')
                cnt--;
            break;
        case 'j':
            if (word[i - 1] == 'l' || word[i - 1] == 'n')
                break;
        default:
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}