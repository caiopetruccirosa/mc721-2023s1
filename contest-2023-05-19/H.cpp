#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int v[101];

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        int ones = 0;
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            if (v[i] == 1) {
                ones++;
            }
        }

        int decrement = ones / 2;
        int instant = n - (decrement * 2);
        
        cout << decrement + instant << '\n';
    }

    return 0;
}