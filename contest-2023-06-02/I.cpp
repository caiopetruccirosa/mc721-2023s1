#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int main() {_
    ll t;
    cin >> t;

    while (t--) {
        ll n, q;
        cin >> n >> q;

        vector<ll> a(n+1, 0), prefix_sum(n+1, 0);
        for (ll i = 1; i <= n; i++) {
            cin >> a[i];
            prefix_sum[i] = prefix_sum[i-1] + a[i];
        }

        for (ll i = 0; i < q; i++) {
            ll l, r, k;
            cin >> l >> r >> k;

            ll new_interval_sum =  k * (r - l + 1);
            ll old_interval_sum = prefix_sum[r] - prefix_sum[l-1];
            ll new_sum = prefix_sum[n] - old_interval_sum + new_interval_sum;

            if (new_sum % 2 != 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}