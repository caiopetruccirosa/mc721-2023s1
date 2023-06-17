#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>

using namespace std;

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        set<int> unique;
        vector<int> p(m+1), t;
        for (int i = 1; i <= m; i++) {
            cin >> p[i];
            if (unique.find(p[i]) == unique.end()) {
                t.push_back(i);
                unique.insert(p[i]);
            }
        }

        while (t.size() < n)
            t.push_back(-1);

        for (int i = n-1; i >= 0; i--) {
            cout << t[i];
            if (i > 0)
                cout << ' ';
            else
                cout << '\n';
        }
    }

    return 0;
}