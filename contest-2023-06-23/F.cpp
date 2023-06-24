#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>

using namespace std;

bool is_possible(unsigned ll n, unsigned ll k) {
    if (n % 2 == 0)
        return true;

    if (n % 2 == k % 2 && k <= n)
        return true;

    return false;
}

int main() {_
    int t;
    cin >> t;

    while (t--) {
        unsigned ll n, k;
        cin >> n >> k;
        if (is_possible(n, k)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}