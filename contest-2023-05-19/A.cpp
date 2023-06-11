#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int a[30], b[30];

int sum(int v[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += v[i];
    return sum;
}

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        
        sort(a, a+n);
        sort(b, b+n);

        for (int i = 0; i < k; i++) {
            if (a[i] >= b[n-i-1])
                break;

            a[i] = b[n-i-1];
        }

        cout << sum(a, n) << '\n';
    }

    return 0;
}