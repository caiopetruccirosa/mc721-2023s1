#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

ll calculate_cost(ll expense) {
    ll zero = 0;
    ll prices[4] = { 2, 3, 5, 7 };
    ll lims[3] = { 100, 10000, 1000000 };
    ll cost = 0;

    ll amount = max(zero, expense-lims[2]);
    cost += amount*prices[3];
    expense -= amount;

    amount = max(zero, expense-lims[1]);
    cost += amount * prices[2];
    expense -= amount;

    amount = max(zero, expense-lims[0]);
    cost += amount * prices[1];
    expense -= amount;

    cost += expense * prices[0];

    return cost;
}

ll calculate_reverse_cost(ll cost) {
    ll zero = 0;
    ll costs[4] = { 2, 3, 5, 7 };
    ll lims[3] = { 100, 10000, 1000000 };

    ll amount = min(cost, lims[0] * costs[0]);
    ll expense = amount/costs[0];
    cost -= amount;

    amount = min(cost, (lims[1] - lims[0]) * costs[1]);
    expense += amount/costs[1];
    cost -= amount;

    amount = min(cost, (lims[2] - lims[1]) * costs[2]);
    expense += amount/costs[2];
    cost -= amount;

    expense += cost/costs[3];

    return expense;
}

int main() {_
    ll a, b;
    cin >> a >> b;
    while (a != 0 && b != 0) {
        ll cost;
        ll total = calculate_reverse_cost(a);
        ll l = 1, r = total/2;
        ll m = (l + r) / 2;
        while (l < r && calculate_cost(total-m)-calculate_cost(m) != b) {
            if (calculate_cost(total-m)-calculate_cost(m) < b) {
                r = m-1;
            } else {
                l = m+1;
            }
            m = (l + r) / 2;
        }
        cout << calculate_cost(m) << '\n';
        cin >> a >> b;
    }
    return 0;
}