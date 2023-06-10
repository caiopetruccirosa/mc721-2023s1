#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int arr[50];

int main() {_
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr+n);

        bool possible = true;
        for (int i = 1; i < n; i++) {
            if (arr[i]-arr[i-1] > 1) {
                possible = false;
                break;
            }
        }

        if (possible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}