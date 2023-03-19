#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int c1, c2, c3;
        cin >> c1 >> c2 >> c3;

        int a1, a2, a3, a4, a5;
        cin >> a1 >> a2 >> a3 >> a4 >> a5;

        c1 -= a1;
        a1 -= a1;
        int x = max(0, min(c1, a4));
        c1 -= x;
        a4 -= x;

        c2 -= a2;
        a2 -= a2;
        int y = max(0, min(c2, a5));
        c2 -= y;
        a5 -= y;

        c3 -= a3;
        c3 -= a4;
        c3 -= a5;
        a3 -= a3;
        a4 -= a4;
        a5 -= a5;

        if (c1 < 0 || c2 < 0 || c3 < 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}