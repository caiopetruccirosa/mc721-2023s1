#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>
using namespace std;

pii maxmin[524288];
int leaves[262145];

int operations(int i, int m) {
    if (i >= m) {
        maxmin[i] = make_pair(leaves[i-m+1],leaves[i-m+1]);
        return 0;
    }

    int lo = operations(i*2, m);
    if (lo == -1)
        return lo;
    int ro = operations((i*2)+1, m);
    if (ro == -1)
        return ro;

    pii lp = maxmin[i*2];
    pii rp = maxmin[(i*2)+1];
    if (rp.second < lp.first) {
        maxmin[i] = make_pair(rp.first, lp.second);
        return ro+lo+1;
    } else if (lp.second <= rp.first) {
        maxmin[i] = make_pair(lp.first, rp.second);
        return ro+lo;
    }
    return -1;
}

int main() {_
    int t;
    cin >> t;

    while (t--) {
        ll m;
        cin >> m;

        for (int i = 1; i <= m; i++) {
            cin >> leaves[i];
            maxmin[i+m-1] = make_pair(leaves[i], leaves[i]);
        }

        cout << operations(1, m) << '\n';
    }

    return 0;
}