#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int main() {_
    int n;
    cin >> n;

    vector<ll> a(n+1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int current = 0, t;
    set<int> s;
    for (t = 1; t <= n; t++) {
        if (a[t] == current)
            current++;
        else if (s.find(a[t]) == s.end())
            break;
        s.insert(a[t]);
    }

    if (t > n)
        cout << -1 << '\n';
    else
        cout << t << '\n';

    return 0;
}