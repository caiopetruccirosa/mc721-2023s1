#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int arr[500];
int ty[500];

int main() {_
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        bool is_sorted = true;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (i > 0 && arr[i-1] > arr[i]) {
                is_sorted = false;
            }
        }

        bool all_t1 = true;
        bool all_t2 = true;
        for (int i = 0; i < n; i++) {
            cin >> ty[i];
            if (ty[i]) {
                all_t1 = false;

            } else {
                all_t2 = false;
            }
        }

        if (is_sorted || (!all_t1 && !all_t2)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}