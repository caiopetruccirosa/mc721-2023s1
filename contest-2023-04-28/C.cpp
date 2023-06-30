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
        string s;
        cin >> s;
        unordered_map<ll,ll> m;
        ll cnt = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            sum += s[i] - '0';
            if (sum == i+1) {
                cnt++;
            }
            ll p = sum - i;
            if (m.count(p)) {
                cnt += m[p];
            } else {
                m[p] = 0;
            }
            m[p]++;
        }
        cout << cnt << '\n';
    }
    return 0;
}