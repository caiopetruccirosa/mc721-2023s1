#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

ll ll_ceil(ll a, ll b) {
    if (a % b == 0)
        return a/b;
    return (a/b)+1;
}

ll minimum_operations(ll l, ll r, ll x, ll a, ll b) {
    if (a == b)
        return 0;
    
    return min(minimum_operations(l, r, x, b));
}

int main() {_
    int t;
    cin >> t;

    while (t--) {
        ll l, r, x, a, b;
        cin >> l >> r >> x >> a >> b;

        if ((l <= b && b <= r) || (x*2 > (r-l+1))) {
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}