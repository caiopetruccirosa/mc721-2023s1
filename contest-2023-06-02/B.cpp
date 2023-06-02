#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int p[1001];

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++)
            cin >> p[i];

        bool possible = false;
        int pi, pj, pk;
        for (int i = 3; i <= n; i++) {
            if (p[i-2] < p[i-1] && p[i-1] > p[i]) {
                pi = i-2;
                pj = i-1;
                pk = i;
                possible = true;
            }
        }
        
        if (possible) {
            cout << "YES\n";
            cout << pi << ' ' << pj << ' ' << pk << '\n';
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}