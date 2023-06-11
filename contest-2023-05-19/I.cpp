#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int main() {_
    int t;
    cin >> t;

    while (t--) {
        ll a, b, n, m;
        cin >> a >> b >> n >> m;
        

        if (n < m || a*m >= b*(m+1)) {
            cout << min(a, b) * n << '\n';
        } else {
            ll x = (n/(m+1))*m;
            ll y = n-((n/(m+1))*(m+1));
            cout << a*x +  min(a,b)*y << '\n';
        }
    }

    return 0;
}