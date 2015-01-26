#include <iostream>

using namespace std;

int main() {
    size_t i;
    cin >> i;
    if (i % 2 == 0 && i > 2)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}