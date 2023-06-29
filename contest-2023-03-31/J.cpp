#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

ll ceil_divide(ll a, ll b) {
    if (a % b == 0)
        return a/b;
    return (a/b) + 1;
}

ll sqrt_ll(ll n) {
    ll s = 1;
    while (s*s < n)
        s++;
    return s;
}

int main() {_
    ll n, a, b;
    cin >> n >> a >> b;

    if (a*b < 6*n) {
        bool swapped = false;
        if (a > b) {
            swapped = true;
            swap(a, b);
        }
        ll sqrt6n = sqrt_ll(6*n);
        ll minarea = LONG_LONG_MAX, besta, bestb;
        for (ll i = a; i <= sqrt6n; i++) {
            ll j = ceil_divide(6*n, i);
            if (i*j < minarea && j >= b) {
                minarea = i*j;
                besta = i;
                bestb = j;            
            }
        }
        if (swapped) {
            swap(besta, bestb);
        }
        cout << minarea << '\n';
        cout << besta << ' ' << bestb << '\n';
    } else {
        cout << a*b << '\n';
        cout << a << ' ' << b << '\n';
    }

    return 0;
}