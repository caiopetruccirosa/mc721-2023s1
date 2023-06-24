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
        int begins0ends0 = 0, begins1ends1 = 0, begins0ends1 = 0, begins1ends0 = 0;
        vector<string> words(n);
        for (int i = 0; i < n; i++) {
            cin >> words[i];
            if (words[i][0] == '0' && words[i][words[i].size()-1] == '0')
                begins0ends0++;

            if (words[i][0] == '1' && words[i][words[i].size()-1] == '1')
                begins1ends1++;

            if (words[i][0] == '0' && words[i][words[i].size()-1] == '1')
                begins0ends1++;

            if (words[i][0] == '1' && words[i][words[i].size()-1] == '0')
                begins1ends0++;
        }

        // caso 1: begins0end0 == begins1end1 && begins0end1 == begins1ends0: tudo certo
        // caso 2: begins0end0 != begins1end1 && begins0end1 == begins1ends0: tudo certo
        // caso 2: begins0end0 == begins1end1 && begins0end1 != begins1ends0: tudo certo
        // caso 2: begins0end0 != begins1end1 && begins0end1 != begins1ends0: tudo certo

        cout << -1 << '\n';
    }
    return 0;
}