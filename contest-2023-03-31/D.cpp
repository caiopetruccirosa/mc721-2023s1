#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int main() {_
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << max(6LL, n + 1) / 2 * 5 << '\n';
    }

    return 0;
}