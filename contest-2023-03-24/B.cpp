#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

ll v[200000];

int main() {_
    int t;
    cin >> t;
    while (t--) {
        ll n, l, r;
        cin >> n >> l >> r;
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        sort(v, v+n);
        ll pairs = 0;
        for (ll i = 0; i < n; i++) {
            pairs += upper_bound(v, v+n, r-v[i])-v;
            pairs -= lower_bound(v, v+n, l-v[i])-v;
            if (l <= v[i]*2 && v[i]*2 <= r)
                pairs--;
        }
        pairs /= 2;
        cout << pairs << '\n';
    }
    return 0;
}