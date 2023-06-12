#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int main() {_
    int A;
    while (cin >> A) {
        bool exists = false;
        for (int i = 0; i <= 12 && !exists; i++) {
            for (int j = 0; j <= 60 && !exists; j++) {
                int B = (i*30 + j*6);
                if (min(B, 360 - B) == A)
                    exists = true;
            }
        }
        if (exists)
            cout << "Y\n";
        else
            cout << "N\n";
    }

    return 0;
}