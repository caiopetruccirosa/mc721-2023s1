#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

bool is_hv(vector<ll> &a, int i) {
    return (a[i-1] < a[i] && a[i+1] < a[i]) || (a[i-1] > a[i] && a[i+1] > a[i]);
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
        
        int sum = 0;
        vector<bool> has_hv(n, false);
        for (int i = 1; i < n-1; i++) {
            if (is_hv(a, i)) {
                has_hv[i] = true;
                sum++;
            }
        }

        int best_reduced = 0;
        for (int i = 1; i < n-1; i++) {
            if (has_hv[i]) {
                int tmp = a[i];

                a[i] = a[i-1];
                int reduced = 1;
                if (has_hv[i-1])
                    reduced++;
                if (!is_hv(a, i+1) && has_hv[i+1])
                    reduced++;
                else if (is_hv(a, i+1) && !has_hv[i+1])
                    reduced--;

                best_reduced = max(best_reduced, reduced);

                a[i] = a[i+1];
                reduced = 1;
                if (has_hv[i+1])
                    reduced++;
                if (!is_hv(a, i-1) && has_hv[i-1])
                    reduced++;
                else if (is_hv(a, i-1) && !has_hv[i-1])
                    reduced--;

                a[i] = tmp;
            }
        }
        cout << sum-best_reduced << '\n';
    }
    return 0;
}