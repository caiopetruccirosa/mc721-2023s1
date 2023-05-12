#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define LIMIT 1000000

using namespace std;

int number_of_ways(int n, int k) {
    if (k == 1 || n == 0) {
        return 1;
    }

    int sum = 0;
    for (int i = 0; i <= n; i++) {
        if ((n-i) >= 0) {
            sum += number_of_ways(n-i, k-1);
        }
    }

    return sum;
}

int main() {_
    int n, k;
    cin >> n >> k;

    while (n != 0 || k != 0) {
        int w = number_of_ways(n, k);
        cout << w % LIMIT << '\n';
        cin >> n >> k;
    }

    return 0;
}