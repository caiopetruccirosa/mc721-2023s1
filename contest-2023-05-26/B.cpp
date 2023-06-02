#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;
        int i = 0, j = 0;
        while (i < k) {
            j++;
            if (j % 3 != 0 && j % 10 != 3) {
                i++;
            }
        }
        cout << j << '\n';
    }

    return 0;
}