#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>

using namespace std;

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n), q(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
            q[i] = p[i];
        }

        if (n > 1) {
            sort(q.begin(), q.end());

            for (int i = 0; i < n-1; i++) {
                if (p[i] == q[i]) {
                    q[i] = q[i+1];
                    q[i+1] = p[i];  
                }
            }
            if (p[n-1] == q[n-1]) {
                q[n-1] = q[n-2];
                q[n-2] = p[n-1];
            }

            for (int i = 0; i < n; i++) {
                cout << q[i];
                if (i < n-1)
                    cout << ' ';
                else
                    cout << '\n';
            }
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}