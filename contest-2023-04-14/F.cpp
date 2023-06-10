#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int main() {_
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        
        if (n % 4 == 0) {
            cout << "YES\n";
            
            for (int i = 2; i <= n; i += 2)
                cout << i << ' ';

            for (int i = 1; i <= n-1; i += 2) {
                if (i != n-1) {
                    cout << i << ' ';;
                } else {
                    cout << i + n/2 << '\n';
                }
            }
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}