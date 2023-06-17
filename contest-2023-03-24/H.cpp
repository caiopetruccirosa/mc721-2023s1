#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int main() {_
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int begins0 = 0, begins1 = 0, ends0 = 0, ends1 = 0;
        vector<string> words(n);
        vector<string> can_reverse;
        for (int i = 0; i < n; i++) {
            cin >> words[i];
            if (words[i][0] == '0')
                begins0++;
            else
                begins1++;
            if (words[i][words[i].size()-1] == '0')
                ends0++;
            else
                ends1++;
            if ((words[i][0] == '0' && words[i][words[i].size()-1] == '1') ||
                (words[i][0] == '1' && words[i][words[i].size()-1] == '0'))
                    can_reverse.push_back(words[i]);
        }
        int should_change = abs(begins0 - ends0) + abs(begins1 - ends1);
        if (abs(should_change - (int)can_reverse.size()) > 1)
            cout << -1 << '\n';
        else
            cout << should_change << '\n';
    }
    return 0;
}