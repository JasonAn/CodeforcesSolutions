#include <iostream>

using namespace std;

int main() {
    size_t n;
    cin >> n;
    size_t m_1, m_2, m_3;
    int ans = 0;

    for (int i = 0; i < n; i++){
        cin >> m_1 >> m_2 >> m_3;
        if (( m_1 + m_2 + m_3 ) >= 2 )
            ans ++;
    }

    cout << ans;

    return 0;
}