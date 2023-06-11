#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int main() {_
    int t;
    cin >> t;

    while (t--) {
        ll a1, a2, a3, a4;
        cin >> a1 >> a2 >> a3 >> a4;
        if (a1 == 0)
            cout << "1\n";
        else
            cout << a1 + min(a2,a3) * 2 + min(a1 + 1, abs(a2 - a3) + a4) << '\n';
    }

    return 0;
}