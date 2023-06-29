#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int is_hv(int a, int b, int c) {
    return (a < b && c < b) || (a > b && c > b);
}

int main() {_
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        int cnt = 0;
        for (int i = 1; i < n-1; i++)
            if (is_hv(a[i-1], a[i], a[i+1]))
                cnt++;

        int cnt_minimzed = cnt;
        for (int i = 1; i < n-1; i++) {
            if (is_hv(a[i-1], a[i], a[i+1])) {
                int cnt_aux = cnt - 1;
                if (i-1 > 0)
                    cnt_aux += is_hv(a[i-2], a[i-1], a[i-1]) - is_hv(a[i-2], a[i-1], a[i]);
                if (i+1 < n-1)
                    cnt_aux += is_hv(a[i-1], a[i+1], a[i+2]) - is_hv(a[i], a[i+1], a[i+2]);
                cnt_minimzed = min(cnt_minimzed, cnt_aux);

                cnt_aux = cnt - 1;
                if (i-1 > 0)
                    cnt_aux += is_hv(a[i-2], a[i-1], a[i+1]) - is_hv(a[i-2], a[i-1], a[i]);
                if (i+1 < n-1)
                    cnt_aux += is_hv(a[i+1], a[i+1], a[i+2]) - is_hv(a[i], a[i+1], a[i+2]);
                cnt_minimzed = min(cnt_minimzed, cnt_aux);
            }
        }
        cout << cnt_minimzed << '\n';
    }
    return 0;
}