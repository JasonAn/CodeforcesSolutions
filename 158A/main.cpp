#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int r = k - 1;
    int *f;
    f = new int[n - 1];

    int i;

    for (i = 0; i < n; i++) {
        cin >> f[i];
    }

    while (f[r] == f[r + 1] && r < n){
        r++;
    }

    while (f[r] == 0 && r >= 0)
        r--;

    cout << r + 1;

    delete f;
    return 0;
}