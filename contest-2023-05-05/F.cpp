#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

long long v[200001];

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        ll smallest_number = LONG_LONG_MAX, negatives = 0, sum = 0;
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            if (v[i] < 0) {
                negatives++;
                v[i] = abs(v[i]);
            }
            smallest_number = min(smallest_number, v[i]);
            sum += v[i];
        }

        if (negatives % 2 == 0) {
            cout << sum << '\n';
        } else {
            cout << sum-(smallest_number*2) << '\n';
        }
    }

    return 0;
}