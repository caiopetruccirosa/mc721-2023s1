#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>

using namespace std;

ll ceil_divide(ll a, ll b) {
    if (a % b == 0)
        return a/b;
    return (a/b) + 1;
}

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin()+1, a.end());

        ll tower1 = a[0];
        for (int i = 1; i < n; i++) {
            ll diff = a[i] - tower1;
            if (diff > 0)
                tower1 += ceil_divide(diff, 2LL);
        }

        cout << tower1 << '\n';
    }

    return 0;
}