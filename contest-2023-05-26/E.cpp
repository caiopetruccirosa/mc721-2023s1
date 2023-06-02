#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

vector<ll> is_possible(ll a, ll b) {
    if (a == b)
        return { a };
    if (a > b)
        return vector<ll>();

    vector<ll> v = is_possible((a*2), b);
    if (v.size() > 0) {
        v.push_back(a);
        return v;
    }
    v = is_possible(((a*10)+1), b);
    if (v.size() > 0) {
        v.push_back(a);
        return v;
    }

    return {};
}

int main() {_
    ll a, b;
    cin >> a >> b;

    vector<ll> transformations = is_possible(a, b);
    if (transformations.size() > 0) {
        cout << "YES\n";
        cout << transformations.size() << '\n';
        for (ll i = (transformations.size() - 1); i >= 0; i--) {
            cout << transformations[i];
            if (i > 0)
                cout << ' ';
        }
        cout << '\n';
    } else {
        cout << "NO\n";
    }

    return 0;
}