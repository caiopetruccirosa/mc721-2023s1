#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>

using namespace std;

ll layer(ll n, ll x, ll y) {
    return min(x, min(y, min(n-x+1, n-y+1)));
}

int main() {_
    int t;
    cin >> t;
    
    while (t--) {
        ll n, x1, y1, x2, y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;
        cout << abs(layer(n, x1, y1)-layer(n, x2, y2)) << '\n';
    }

    return 0;
}