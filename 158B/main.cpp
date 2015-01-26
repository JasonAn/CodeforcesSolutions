#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int array[n];

    for(int i = 0; i < n; i++)
        cin >> array[i];

    int res = 0, ans = 0;
//    cout << ans << endl;

    for(int i = 0; i < n; i++){
        res += array[i];
        ans += res / 4;
//        cout << ans << endl;
        res = res % 4;
//        cout << res << endl;
    }

    if(res != 0)
        ans ++;

    cout << ans;

    return 0;
}