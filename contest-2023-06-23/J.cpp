#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>

using namespace std;

int main() {_
    int n, q;
    cin >> n >> q;

    vector<int> pos(51, -1);
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (pos[a] == -1) {
            pos[a] = i;
        }
    }

    for (int i = 0; i < q; i++) {
        int t;
        cin >> t;
        cout << pos[t];
        for (int j = 1; j <= 50; j++) {
            if (pos[j] < pos[t]) {
                pos[j]++;
            }
        }
        pos[t] = 1;
        if (i < q-1)
            cout << ' ';
    }
    cout << '\n';

    return 0;
}