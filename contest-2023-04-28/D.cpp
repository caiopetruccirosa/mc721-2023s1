#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>
#define pipii pair<int,pii>

using namespace std;

int main() {_
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++)
            cin >> p[i];
        int cnt = 0;
        for (int i = 1; i < n; i++) {
            if (p[i-1] > p[i]) {
                cnt++;
                i++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}