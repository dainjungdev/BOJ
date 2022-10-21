#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int time = 0;
    int dial[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6,  6,  6,  7,
                    7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
    
    for (char &c : s) {
        time += dial[c - 'A'];
    }
    
    cout << time;
    return 0;
}