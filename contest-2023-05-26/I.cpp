#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int main() {_
    int t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;
        if (k < n) {
            cout << k << '\n';
        } else {
            ll ans = k, res = k/n;
            while (res > 0) {
                ans += res;
                res /= n;
            }
            cout << ans << '\n';
        }
    }

    return 0;
}