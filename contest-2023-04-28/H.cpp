#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

//bool is_possible(string n) {
//    if (n.size() < 2)
//        return false;
//
//    for (int i = 1; i < n.size(); i++)
//        if (n[i] < n[i-1])
//            return false;
//
//    return n[n.size()-1] == n[n.size()-2];
//}

bool is_possible(ll n) {
    if (n > 1099)
        return true;

    for (ll i = 0; i*11 <= n; i++)
        if ((n - (i*11)) % 111 == 0)
            return true;

    return false;
}

int main() {_
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (is_possible(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}