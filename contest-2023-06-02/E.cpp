#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int operations(ll l, ll r, ll x, ll a, ll b) {
    if (a == b)
        return 0;
        
    if (abs(a - b) >= x)
        return 1;
    
    if (abs(a - l) >= x && abs(l - b) >= x)
        return 2;

    if (abs(a - r) >= x && abs(r - b) >= x)
        return 2;

    if (abs(a - l) >= x && abs(l - r) >= x && abs(r - b) >= x)
        return 3;

    if (abs(b - l) >= x && abs(l - r) >= x && abs(r - a) >= x)
        return 3;

    return -1;   
}

int main() {_
    int t;
    cin >> t;

    while (t--) {
        ll l, r, x, a, b;
        cin >> l >> r >> x >> a >> b;
        cout << operations(l, r, x, a, b) << '\n';
    }

    return 0;
}