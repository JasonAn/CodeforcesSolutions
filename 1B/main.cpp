#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    n = 1e6;

    int a[5];

    for (int i = 1; i < 6; i++){
        a[i] = n % 26 + 64;
        n = n / 26;
    }

    return 0;
}