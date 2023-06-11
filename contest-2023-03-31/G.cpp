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
        for (int k = 2; k < 30; k++) {
            ll val = (1 << k)-1;
            if (n % val == 0) {
                cout << n/val << '\n';
                break;
            }
        }
    }
    return 0;
}