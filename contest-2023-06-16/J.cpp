#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>

using namespace std;

int main() {_
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    int r, k, b;

    if (r1 == r2 || c1 == c2)
        r = 1;
    else
        r = 2;

    if (!((r1 % 2 == c1 % 2) == (r2 % 2 == c2 % 2)))
        b = 0;
    else if (abs(r1-r2) == abs(c1-c2))
        b = 1;
    else
        b = 2;

    k = max(abs(r1-r2), abs(c1-c2));

    cout << r << ' ' << b << ' ' << k << '\n';

    return 0;
}