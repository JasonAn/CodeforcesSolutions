#include <iostream>
#include <math.h>

using namespace std;

int main() {
    long long i, j, a;

    long long m, n;
    long long ans;
    cin >> i >> j >> a;

    m = (long) ceil (i * 1.0 / a);
    n = (long) ceil (j * 1.0 / a);

    ans = m * n;

    cout << ans;

    return 0;
}