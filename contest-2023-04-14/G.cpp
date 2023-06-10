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
        
        ll greatest_divisor = -1;
        for (ll i = 1; i*i<=n && i <= k; i++) {
            if (n % i == 0) {
                greatest_divisor = max(greatest_divisor, i);
                if (n/i <= k) {
                    greatest_divisor = max(greatest_divisor, n/i);
                }
            }
        }

        cout << n/greatest_divisor << '\n';
    }

    return 0;
}