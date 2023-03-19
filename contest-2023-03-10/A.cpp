#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        int possibilities = n / 2;
        if (n % 2 == 0) {
            possibilities--;
        }

        cout << possibilities << '\n';
    }

    return 0;
}