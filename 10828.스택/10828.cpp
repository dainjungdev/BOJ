#include <iostream>
#include <string>

using namespace std;

class Stack {
  private:
    int arr[10000];
    int pos = 0;

  public:
    void push(int n) { arr[pos++] = n; }

    void pop() {
        if (pos == 0) {
            cout << -1 << '\n';
        } else {
            cout << arr[--pos] << '\n';
        }
    }

    void size() { cout << pos << '\n'; }

    void empty() { cout << (pos == 0) << '\n'; }

    void top() {
        if (pos == 0) {
            cout << -1 << '\n';
        } else {
            cout << arr[pos - 1] << '\n';
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    Stack s;
    string command;
    int x;

    for (int i = 0; i < n; ++i) {
        cin >> command;
        if (command == "push") {
            cin >> x;
            s.push(x);
        } else if (command == "pop") {
            s.pop();
        } else if (command == "size") {
            s.size();
        } else if (command == "empty") {
            s.empty();
        } else {
            s.top();
        }
    }
    return 0;
}