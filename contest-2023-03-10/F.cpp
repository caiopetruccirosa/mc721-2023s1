#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n, diff = 0, maxcnt = 0;
        cin >> n;
        vector<int> a(n+1), cnt(n+1, 0);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (cnt[a[i]] == 0)
                diff++;
            cnt[a[i]]++;
            maxcnt = max(maxcnt, cnt[a[i]]);
        }
        cout << max(min(diff, maxcnt-1),min(diff-1, maxcnt)) << '\n';
    }

    return 0;
}