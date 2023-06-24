#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n+1), b(m+1), pos(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pos[a[i]] = i;
        }
        
        ll time = 0;
        int last_present = 0;
        for (int i = 1; i <= m; i++) {
            cin >> b[i];
            if (pos[b[i]] > last_present) {
                int k = pos[b[i]] - i;
                time += 2*k + 1;
                last_present = pos[b[i]];
            } else {
                time++;
            }
        }
        cout << time << '\n';
    }
    return 0;
}