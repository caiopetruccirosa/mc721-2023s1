#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main() {_
    int n, v;
    cin >> n >> v;

    int tank = min(n-1, v), money = min(n-1, v);
    int i = 2;
    while (tank < n-1) {
        tank++;
        money+=i;
        i++;
    }
    cout << money << '\n';

    return 0;
}