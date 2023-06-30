#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>

using namespace std;

int min_walls(ll x, ll y, ll n, ll m) {
    int w = 4;
    if (x == 1 || x == n)
        w--;
    if (y == 1 || y == m)
        w--;
    return w;
}

int main() {_
    int t;
    cin >> t;
    
    while (t--) {
        ll n, m, x1, y1, x2, y2;
        cin >> n >> m >> x1 >> y1 >> x2 >> y2;
        cout << min(min_walls(x1, y1, n, m), min_walls(x2, y2, n, m)) << '\n';
    }

    return 0;
}