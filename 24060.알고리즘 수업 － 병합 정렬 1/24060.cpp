#include <iostream>

using namespace std;

int n, k, cnt;
int *a, *tmp;

void merge(int *a, int p, int q, int r) {
    int i = p, j = q + 1, t = 1;

    while (i <= q && j <= r) {
        if (a[i] <= a[j]) {
            tmp[t++] = a[i++];
        } else {
            tmp[t++] = a[j++];
        }
    }
    while (i <= q) {
        tmp[t++] = a[i++];
    }
    while (j <= r) {
        tmp[t++] = a[j++];
    }

    for (i = p, t = 1; i <= r; ++i, ++t) {
        a[i] = tmp[t];
        if (++cnt == k) {
            cout << tmp[t];
            exit(0);
        }
    }
}

void merge_sort(int *a, int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        merge_sort(a, p, q);
        merge_sort(a, q + 1, r);
        merge(a, p, q, r);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    a = new int[n + 1];
    tmp = new int[n + 1];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    merge_sort(a, 0, n - 1);
    cout << -1;

    delete[] a;
    delete[] tmp;
    return 0;
}