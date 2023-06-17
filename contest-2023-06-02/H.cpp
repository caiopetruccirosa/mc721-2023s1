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

        vector<int> a(n+1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        if (a[1] == 1) {
            cout << n+1;
            for (int i = 1; i <= n; i++) {
                cout << ' ' << i;
            }
            cout << '\n';
        } else if (a[n] == 0) {
            for (int i = 1; i <= n; i++) {
                cout << i << ' ';
            }
            cout << n+1 << '\n';
        } else {
            int k = -1;
            for (int i = 1; i < n; i++) {
                if (a[i] == 0 && a[i+1] == 1) {
                    k = i;
                    break;
                }
            }
            for (int i = 1; i <= n; i++) {
                cout << i;
                if (i == k)
                    cout << ' ' << n+1 << ' ';
                else if (i == n)
                    cout << '\n';
                else
                    cout << ' ';
            }
        }
    }

    return 0;
}