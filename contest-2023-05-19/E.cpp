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

        bool touch_start = false, touch_end = false;
        for (int i = 1; i <= n; i++) {
            int s, e;
            cin >> s >> e;
            if (s == k)
                touch_start = true;
            if (e == k)
                touch_end = true;
        }

        if (touch_start && touch_end)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}