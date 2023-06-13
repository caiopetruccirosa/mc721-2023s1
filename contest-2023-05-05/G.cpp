#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pii pair<int,int>
#define pcc pair<char,char>

using namespace std;

int main() {_
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int sum = 0, zero_amount = count(s.begin(), s.end(), '0');
        if (zero_amount > 0) {
            int l = s.find('0');
            int r = s.rfind('0');
            if (r - l + 1 == zero_amount)
                sum = 1;
            else
                sum = 2;
        }
        cout << sum << '\n';
    }

    return 0;
}