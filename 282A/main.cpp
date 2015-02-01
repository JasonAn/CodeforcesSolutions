#include <iostream>
#include <string>

using namespace std;

int main() {
    size_t m;
    cin >> m;

    int ans  = 0;

    string str[m];
    for (int i = 0; i < m; i++){
        cin >> str[i];
        if (str[i].at(1) == '+')
            ans++;
        else if (str[i].at(1) == '-')
            ans--;

    }

    cout << ans;

    return 0;
}