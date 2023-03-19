#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        int moves2 = 0;
        int moves3 = 0;
        int rest = n;
        while (rest % 2 == 0) {
            moves2++;
            rest /= 2;
        }
        while (rest % 3 == 0) {
            moves3++;
            rest /= 3;
        }

        if (rest == 1 && moves3 >= moves2) {
            cout << 2*moves3 - moves2 << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}