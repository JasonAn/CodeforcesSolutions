#include <iostream>
#include <string>

using namespace std;

int main() {
    size_t n;
    cin >> n;

    string *p = new string[n];
    for (int i = 0; i < n; i++){
        cin >> p[i];
    }

    for (int i = 0; i < n; i++){
        if (p[i].length() <= 10)
            cout << p[i] << endl;
        else
            cout << p[i].at(0) << (p[i].length() - 2) << p[i].at(p[i].length() - 1) << endl;
    }

    return 0;
}