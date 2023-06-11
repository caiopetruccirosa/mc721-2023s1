#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int s[200001], f[200001], d[200001];

int main() {_
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> s[i];
        for (int i = 1; i <= n; i++)
            cin >> f[i];
        
        int last_f = s[1];
        for (int i = 1; i <= n; i++) {
            d[i] = f[i] - max(last_f, s[i]);
            last_f = f[i];
        }

        for (int i = 1; i <= n; i++) {
            cout << d[i];
            if (i < n)
                cout << ' ';
            else
                cout << '\n';
        }
    }

    return 0;
}