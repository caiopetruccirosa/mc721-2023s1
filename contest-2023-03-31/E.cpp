#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>

using namespace std;

bool has_complement(ll l, ll r, ll target) {
    if (l > r)
        return false;
    ll m = (l+r)/2;
    if (m*m*m == target)
        return true;
    else if (m*m*m < target)
        return has_complement(m+1, r, target);
    else
        return has_complement(l, m-1, target);
}

bool is_possible(ll x) {
    ll lim;
    for (lim = 1; lim*lim*lim < x; lim++) {}
    for (ll i = 1; i <= lim; i++)
        if (has_complement(i, lim, x-(i*i*i)))
            return true;
    return false;
}

int main() {_
    int t;
    cin >> t;
    while (t--) {
        ll x;
        cin >> x;
        if (is_possible(x))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}