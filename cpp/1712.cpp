#include <iostream>

using namespace std;

int main() {
    int fixed_cost, var_cost, price;
    cin >> fixed_cost >> var_cost >> price;

    if (var_cost >= price) {
        cout << -1;
    } else {
        int bep = fixed_cost / (price - var_cost) + 1;
        cout << bep;
    }

    return 0;
}