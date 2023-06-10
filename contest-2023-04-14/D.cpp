#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

ll nums[4];

int main() {_
    for (int i = 0; i < 4; i++)
        cin >> nums[i];

    sort(nums, nums+4);

    ll z = nums[3], x = nums[0], y = nums[1], w = nums[2];
    ll a = z - x, b = z - y, c = z - w;

    cout << a << ' ' << b << ' ' << c << '\n';

    return 0;
}